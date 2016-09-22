#include <stdint.h>
#include <stdio.h>

/**
 * if
 * switch
 * goto
 * for
 * while
 * do while
 * @return
 */
int main() {
    int32_t a = 8;
    int32_t b = 10;

    if (a > b) {
        printf("");
    } else {

    }


    // switch

    switch (a) {
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        default:
            break;
    }

    //goto
    // 先定义好一个标签
    label:
    printf("100\n");
    printf("102\n");

    // 跳转到这个标签
//    goto label;


    for (int i=0;i<100;i++){


        printf("%d\n",i);
    }
    return 0;
}