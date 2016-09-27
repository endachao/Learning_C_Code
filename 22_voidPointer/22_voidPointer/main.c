//
//  main.c
//  22_voidPointer
//  无类型指针
//  Created by yuanchao on 2016/9/27.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // 无类型指针表示指针可以存放任何类型的数据
    void *data = malloc(8);
    int *intData = data;
    intData[0] = 10000;
    
    printf("%d\n",intData[0]);
    free(data);
    
    return 0;
}
