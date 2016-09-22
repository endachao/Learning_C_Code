#include <stdio.h>


/**
 * 浮点型数据
 * @return
 */
int main() {

    // float 用 4 个字节
    float a = 3.1; // 单精度
    float d = 3;//

    // 8 个字节 64 位
    double  b = 3.1;// 双精度

    // 16 字节 128 位
    long double c = 3.1;// 长双精度


    // long 输出需要 %Lf
    printf("a=%f,b=%f,c=%Lf",a,b,c);
    return 0;
}