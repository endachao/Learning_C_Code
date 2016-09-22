
#include <stdio.h>

// 把常用的每个类型全部定义好
#include <stdint.h>

/**
 * 整型
 */

int main() {

    int a = 10;
    int b = -10;

    // 不管在 32 位还是 64 位 都是 8 个字节
    long long c = 20;

    printf("%d\n",a);

    printf("%ld\n",c);


    // 二进制表示
    int d = 0b100;

    // 16 进制表示
    int e = 0xB;

    // 8 进制表示
    int f = 010;


    // 无符号 int 类型
    unsigned int g = 12;


    // 等同于  int
    int32_t h = 10;

    // 相当于一个字节 -128 至 127
    int8_t i = 127;

    // 无符号的一个字节 最大 255
    uint8_t j = 255;

    // 等同于 long long 在每个系统都是一样的
    int64_t t = 20;



    return 0;
}