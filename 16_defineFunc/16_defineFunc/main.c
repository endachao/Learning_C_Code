//
//  main.c
//  16_defineFunc
//  宏函数
//  Created by yuanchao on 16/9/22.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>

#define MAX(a,b) a>b?a:b

#define LOOP(FROM,TO,CONTENT)\
    for(int i=FROM;i<TO;i++){\
        CONTENT\
    }


void test(){
    printf("test1\n");
}

void c_test2(){
    printf("test2\n");
}

// 宏定义函数中调用其他函数，如果需要连接字符串的话，使用参数需要用 ## 连接
#define call(functionName) functionName() // c_##functionName()

// __VA_ARGS__ 接收可变参数
#define LOG(LEVEL,FORMAT,...) printf(LEVEL);printf(FORMAT,__VA_ARGS__);
#define LOG_E(FORMAT,...) LOG("ERROR：",FORMAT,__VA_ARGS__);
#define LOG_W()
#define LOG_I()
#define LOG_D()

int main(int argc, const char * argv[]) {
    // insert code here...
    
    LOG_E("%s\n","错误......");
    
    call(test);
    LOOP(2, 100,
         printf("current index is %d\n",i);
         );
    
    printf("%d\n",MAX(1, 2));
    printf("Hello, World!\n");
    return 0;
}
