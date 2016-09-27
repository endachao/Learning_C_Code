//
//  main.c
//  23_fileSystem
//  文件操作
//  Created by yuanchao on 2016/9/27.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    // 打开文件
//    FILE * f = fopen("data.txt", "w");
//    if(f != NULL){
//        // 写入内容
//        fputc('a', f);
//        fputs("Hello Wrold\n", f);
        // 关闭文件
        // fclose(f);

//    }else{
//        printf("文件创建失败\n");
//    }
    
    
    // 读取文件
    FILE *f = fopen("data.txt","r");
    if(f){
        // 设置字符缓冲区
        char buff[100];
        memset(buff, 0, 100);
        for (int i=0; i<100; i++) {
            // 读取内容
            char ch = fgetc(f);
            if(ch != EOF){ // eof  是文件结尾
                buff[i] = ch;
            }else{
                break;
            }
        }
        puts(buff);
        fclose(f);
    }else{
        printf("文件读取失败\n");
    }
    
    
    
    puts("end..");
    return 0;
}
