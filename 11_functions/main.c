#include <stdio.h>

#include <stdarg.h>
/**
 * 函数
 * @return
 */


void hello(char *name) {
    printf("hello %s \n", name);
}


int count(int a, int b) {
    return a + b;
}
//
//int main() {
//    hello("ss");
//    int c = count(1,2);
//    printf("%d \n",c);
//    return 0;
//}


/**
 * 函数接收到命令行的值
 * @param argc  有几个参数
 * @param argv  参数的值 第一个值是程序的路径
 * @return
 */
//int main(int argc, char **argv) {
//
//    printf("%d\n",argc);
//
//    for(int i = 0;i<argc;i++){
//        printf("key is %d value is %s\n",i,argv[i]);
//    }
//
//
//    return 0;
//}


/**
 * stdarg.h
 * 可变参数
 * @param n
 * @return
 */
int sum(int n, ...) {
    int all = 0;

    // 获取参数列表
    va_list args;

    // 开始获取参数
    va_start(args,n);

    for(int i =0 ;i<n;i++){
        // 读取参数
        all += va_arg(args,int);
    }
    // 结束获取
    va_end(args);
    return all;
}

int main() {

    int all = sum(3,1,2,3);
    printf("%d\n",all);
    return 0;
}