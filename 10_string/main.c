#include <string.h>
#include <stdio.h>
int main() {

    /**
    // 字符串连接
    char *str = "Hello";
    char *str1 = "world";

    char dist[100];
    memset(dist,0,100);


    strcat(dist,str);
    strcat(dist," ");
//    strcat(dist,str1);

    strncat(dist,str1,3); // 连接部分字符串
    printf("%s",dist); // hello world

     **/

    /**
     * 格式化字符串

//    char *str = "Item";
//    int a = 100;
//    char dist[100];
//    memset(dist,0,100);
//    sprintf(dist,"%s %d",str,a);
//    puts(dist);

    // 拆分字符串
    char *str = "Item 100";
    char buf[10];
    memset(buf,0,10);
    int a;
    sscanf(str,"%4s %d",buf,&a);

    printf("string %s ,value %d\n",buf,a);

     */

    /**
     * 字符串比较

    //
    char *str = "Hello";
    char *str1 = "Hello";
    char str2[] = "Hello";


    // == 比较的是字符串地址。如果多个字符串值相同,会使用同一个内存地址
//    printf("%d\n",str==str2);


    // 比较的字符串的值, 0 表示相同
    printf("%d",strcmp(str,str1));

     */

    /**
     * 字符串截取
     */

    char *str = "Hello World";

    // 字符串截取,从 o 开始输出后面的字符串
    char *str1 = strchr(str,'o');

    // 反向查找, 从字符串后面查找
    char *str2 = strrchr(str,'o');

    char *str3 = strstr(str,"Wo");

    char buff[10];
    memset(buff,0,10);

    // 从字符串开始截取到第三个字符
    strncat(buff,str,3);


    // 从特定位置截取到字符串结尾
    char *str4 = str + 1;


    // begin 指定开始位置,指定结束位置
    char buff2[10];
    memset(buff2,0,10);

    // 指定开始
    char *str5 = str + 2;

    // 指定结束位置
    strncat(buff2,str5,4);

    // end


    puts(str);  // Hello World

    puts(str1); //o World

    puts(str2); // orld

    puts(str3); // World

    puts(buff); // Hel

    puts(str4); //ello World

    puts(buff2);


    return 0;
}