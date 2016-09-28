//
//  main.c
//  services
//
//  Created by yuanchao on 2016/9/28.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define PORT 8081

void errorHandling(char * message);

int main(int argc, const char * argv[]) {
    // insert code here...
    int service_sock;   // 保存创建的服务器套接字
    int clent_sock;     // 保存客户端套接字
    
    char buf[1024];     // 缓冲区
    
    struct sockaddr_in service_addr;    // 保存服务器套接字地址信息
    struct sockaddr_in clent_addr;      // 保存客户端套字地址信息
    socklen_t clent_addr_size;          // 客户端套字节地址变量大小
    
    
    // 发送给客户端的固定内容
    char status[] = "HTTP/1.0 200 OK\r\n";
    char header[] = "Server: A Simple Web Server\r\nContent-Type: text/html\r\n\r\n";
    char body[] = "<html><head><title>A simple web server</title></head><body><h2>Hello World</h2></body></html>";
    
    // 创建一个服务器套接字
    
    /**
     定义函数：int socket(int domain, int type, int protocol);
     
     函数说明：socket()用来建立一个新的socket, 也就是向系统注册, 通知系统建立一通信端口. 参数domain 指定使用何种的地址类型, 完整的定义在/usr/include/bits/socket.h 内, 底下是常见的协议:
     PF_UNIX/PF_LOCAL/AF_UNIX/AF_LOCAL UNIX 进程通信协议
     PF_INET?AF_INET Ipv4 网络协议
     PF_INET6/AF_INET6 Ipv6 网络协议
     PF_IPX/AF_IPX IPX-Novell 协议
     PF_NETLINK/AF_NETLINK 核心用户接口装置
     PF_X25/AF_X25 ITU-T X. 25/ISO-8208 协议
     PF_AX25/AF_AX25 业余无线AX. 25 协议
     PF_ATMPVC/AF_ATMPVC 存取原始 ATM PVCs
     PF_APPLETALK/AF_APPLETALK appletalk (DDP)协议
     PF_PACKET/AF_PACKET 初级封包接口
     
     参数 type 有下列几种数值:
     1、SOCK_STREAM 提供双向连续且可信赖的数据流, 即TCP. 支持 OOB 机制, 在所有数据传送前必须使用connect()来建立连线状态.
     2、SOCK_DGRAM 使用不连续不可信赖的数据包连接
     3、SOCK_SEQPACKET 提供连续可信赖的数据包连接
     4、SOCK_RAW 提供原始网络协议存取
     5、SOCK_RDM 提供可信赖的数据包连接
     6、SOCK_PACKET 提供和网络驱动程序直接通信. protocol 用来指定socket 所使用的传输协议编号, 通常此参考不用管它, 设为0 即可.
     
     返回值：成功则返回socket 处理代码, 失败返回-1.
     */
    service_sock = socket(PF_INET, SOCK_STREAM, 0);
    
    if(service_sock == -1){
        errorHandling("socket() error");
    }
    
    // 配置套接字IP和端口信息
    memset(&service_addr, 0, sizeof(service_addr));
    service_addr.sin_family = AF_INET;
    service_addr.sin_addr.s_addr = htonl(INADDR_ANY);   // htonl ()用来将参数指定的32 位hostlong 转换成网络字符顺序.
    service_addr.sin_port = htons(PORT);                // htons()用来将参数指定的16 位hostshort 转换成网络字符顺序.
    
    // 绑定服务器套接字
    if(bind(service_sock, (struct sockaddr*)&service_addr, sizeof(service_addr)) == -1){
        errorHandling("bind() error");
    }
    
    /**
     listen()用来等待参数s 的socket 连线. 参数backlog 指定同时能处理的最大连接要求, 如果连接数目达此上限则client 端将收到ECONNREFUSED 的错误. Listen()并未开始接收连线, 只是设置socket 为listen 模式, 真正接收client 端连线的是accept(). 通常listen()会在socket(), bind()之后调用, 接着才调用accept().
     
     backlog 具体是什么意思呢？每一个连接请求都会进入一个连接请求队列，等待 listen 的程序调用 accept() 函数来接受这个连接。当系统还没有调用 accept() 函数的时候，如果有很多连接，那么本地能够等待的最大数目就是 backlog 的数值。可以将其设成 5 到10 之间的数值。listen() 函数调用成功返回 0，失败返回 -1。
    
     */
    // 监听服务器套接字
    if(listen(service_sock, 5) == -1){
        errorHandling("listen() error");
    }
    
    // 接收客户端的请求
    clent_addr_size = sizeof(clent_addr);
    
    /**
     函数说明：accept()用来接受参数s 的socket 连线. 参数s 的socket 必需先经bind()、listen()函数处理过, 当有连线进来时accept()会返回一个新的socket 处理代码, 往后的数据传送与读取就是经由新的socket处理, 而原来参数s 的socket 能继续使用accept()来接受新的连线要求. 连线成功时, 参数addr 所指的结构会被系统填入远程主机的地址数据, 参数addrlen 为scokaddr 的结构长度. 关于机构sockaddr 的定义请参考bind().
     */
    clent_sock = accept(service_sock, (struct sockaddr *)&clent_addr, &clent_addr_size);
    if(clent_sock == -1){
        errorHandling("accept() error");
    }
    
    // 读取客户端请求
    read(clent_sock, buf, sizeof(buf) -1);
    
    printf("%s",buf);
    
    // 向客户端发送信息
    write(clent_sock, status, sizeof(status));
    write(clent_sock, header, sizeof(header));
    write(clent_sock, body, sizeof(body));
    
    // 关闭套接字
    close(service_sock);
    close(clent_sock);
    
    return 0;
}

void errorHandling(char * message){
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}
