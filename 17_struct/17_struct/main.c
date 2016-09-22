//
//  main.c
//  17_struct
//  结构体
//  Created by yuanchao on 2016/9/22.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>

// 申明结构体
struct File{
    char *name;
    int size;
};

// 定义为类型
typedef struct{
    char *name;
    int size;
} Video;

int main(int argc, const char * argv[]) {
    
    // 基础用法
    struct File file;
    file.name = "code.txt";
    file.size = 100;
    printf("fileName is %s, size is %d\n",file.name,file.size);
    
    // 直接初始化
    struct File m = {"map.txt",100};
    printf("fileName is %s, size is %d\n",m.name,m.size);
    
    // 使用 typedef 把结构体定义为类型之后，可以直接申明
    Video v;
    v.name = "c language";
    v.size = 100;
    printf("fileName is %s, size is %d\n",v.name,v.size);

    
    return 0;
}
