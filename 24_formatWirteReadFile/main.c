#include <stdio.h>

/**
 * 格式化文件输入与输出
 * @return
 */
int main() {

    // 格式化写入
//    FILE * f = fopen("data.txt","w");
//
//    if(f){
//        for(int i=0;i<100;i++){
//            fprintf(f,"Item %d \n",i);
//        }
//        fclose(f);
//    }else{
//        puts("写入失败");
//    }


    // 格式化读取文件
    FILE *f = fopen("data.txt","r");

    if(f){
        int a;
        // 循环读取文件，判断是否到文件结尾
        while(!feof(f)){
            fscanf(f,"Item %d\n",&a);
            printf("Number read is %d\n",a);
        }
        fclose(f);
    }else{
        puts("读取失败");
    }

    puts("end..");
    return 0;
}