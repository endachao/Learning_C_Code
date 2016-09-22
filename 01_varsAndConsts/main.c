#include <stdio.h>
/**
 *  变量 and 常量
 * @return
 */


// 常量的定义 在编译时就会把 MY_AGE 替换成 1000
#define MY_AGE 10000


// 第二种常量的声明 在运行时会替换
const int MY_A = 10000;

int main() {

    int a = 10; // int


    printf("hello c %d",MY_AGE);
    return 0;
}