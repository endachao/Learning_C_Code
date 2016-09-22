#include <stdio.h>
/**
 * 预设常量
 */

#define THE_NUM 2

// gcc main.c -DTHE_NUM=3 也可以编译时预设

int main() {

    printf("%d\n",THE_NUM);
    return 0;
}