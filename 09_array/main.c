#include <stdio.h>
#include <string.h>
#include <stdint.h>
int main() {

    /** 数据基础
        // int 类型 长度10
        int32_t arr[10];
        //clear array
        for(int32_t a = 0;a<10;a++){
            arr[a] = 0;
        }

        // 数组初始化
        int arr[] = {1,2,3,4,5,6};

        // i want to get array length
        int length = sizeof(arr) / sizeof(arr[0]);  //数组占内存总空间，除以单个元素占内存空间大小
        printf("length:%d\n",length);

        for(int32_t i=0;i< length;i++){
            printf("%d\n",arr[i]);
        }
    **/


    /** 二维数组
//    int arr[3][4];
    //clear
//    for(int i =0;i<3;i++){
//        for(int a=0;a<4;a++){
//            arr[i][a] = 0;
//        }
//    }

    // 二维数据必须指定长度
    int arr[3][4] ={
            {1,2,3,4},
            {5,6,7,8},
            {9,1,1,1}
    };

    for(int i =0;i<3;i++){
        for(int a=0;a<4;a++){
            printf("index(%d,%d),value(%d)\n",i,a,arr[i][a]);
        }
    }

     */

    // 字符数组

//    char str[10]="Word";
//    char str[10]={'w','o','r','d','\0'}; // 插入 \0 结尾字符串
//
//    // 快速清空字符串数组
//    memset(str,0,10);
//
//    printf("%ld", strlen(str));


    char str[] = "Hello";

    for(int i=0;i<5;i++){
        printf("%c\n",str[i]);
    }




    return 0;
}