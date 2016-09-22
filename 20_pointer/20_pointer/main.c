//
//  main.c
//  20_pointer
//  指针
//  Created by yuanchao on 2016/9/22.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
    /*
     & 取得变量在内存中的地址
     
     int x = 4;
     int *p = &4; // 保存了 x 的内存地址
     
     * 运算符接收一个内存地址，然后返回地址中存的值
     
     & 接受一个值，返回在内存中的地址
     
     * 运算符还可以设置内存中的值*
     
     
     数组变量可以被做指针
     数组变量指向数组中第一个元素
     如果把函数参数申明为数组，它会被当作指针处理
     sizeof返回某条数据占用空间的大小
     sizeof(指针) 在32位操作系统中返回4，在64位系统中返回8
     
     可以用 * 运算符读取数组的第一个元素
     
     
     数组变量不能指向其他地方
     把数组变量传给指针，会发生退化
     
     
     // stdin 表示数组将来自键盘
     fgets(存储变量,长度,stdin);
     
     
     如果在变量申明中看到 * 说明变量是指针
     字符串字面值保存在只读存储器中
     如果想要修改字符串，需要在新的数组中创建副本
     可以将 char 指针申明为 const char * 防止代码用它修改字符串
     */

    // 通过 * 取得指针的值，& 取得指针的地址
    char * str = "Hello";
    int * pa = 10;
    
    // 分配内存
    int32_t *p = malloc(4);
    *p = 100;
    
    
    free(p);
    return 0;
}
