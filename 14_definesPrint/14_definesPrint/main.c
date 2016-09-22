//
//  main.c
//  14_definesPrint
//  条件预处理
//  不同环境输出不同内容
//  gcc main.c -DPLATFORM=3
//  Created by yuanchao on 16/9/21.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#define WIN 1
#define LINUX 2
#define MAC 3

#include <stdio.h>

void sayHello(){
    
#if PLATFORM==WIN
    printf("windows\n");
#elif PLATFORM==MAC
    printf("mac\n");
#elif PLATFORM==LINUX
    printf("linux\n");
#else
    printf("unknow\n");
#endif
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    sayHello();
    return 0;
}
