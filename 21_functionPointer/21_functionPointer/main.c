//
//  main.c
//  21_functionPointer
//  函数指针
//  Created by yuanchao on 2016/9/22.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>

void hello(int a,int b,char * c){
    printf("Hello World\n");
}

typedef void(*simpleFunc)();

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // 定义函数指针 指向函数内存地址
//    void(*fp)(int,int,char) = &hello;
    
   simpleFunc fp = &hello;
    
    fp(0,0,"x");
    
    return 0;
}
