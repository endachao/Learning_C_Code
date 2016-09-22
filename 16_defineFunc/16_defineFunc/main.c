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


int main(int argc, const char * argv[]) {
    // insert code here...
    
    LOOP(2, 100,
         printf("current index is %d\n",i);
         );
    
    printf("%d\n",MAX(1, 2));
    printf("Hello, World!\n");
    return 0;
}
