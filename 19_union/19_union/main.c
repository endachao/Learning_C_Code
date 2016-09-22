//
//  main.c
//  19_union
//  共同体
//  Created by yuanchao on 2016/9/22.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>

// 两个元素公用一块内存，数据长度按最大长度取
// 默认会内存对齐优化
typedef union{
    char ch;
    uint8_t ch_num;
    uint32_t num;
}BaseData;

// __attribute__((__packed__)) 会取消内存对齐优化，压缩结构体
typedef union{
    char ch;
    uint8_t ch_num;
    uint32_t num;
}__attribute__((__packed__)) Data;

int main(int argc, const char * argv[]) {
    
    BaseData data;
    data.ch = 'B';
    // insert code here...
    
    
    
    return 0;
}
