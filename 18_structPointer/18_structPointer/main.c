//
//  main.c
//  18_structPointer
//  结构体指针
//  Created by yuanchao on 2016/9/22.
//  Copyright © 2016年 yuanchao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * name;
    int age;
} Student;

// 申明全局结构体
void func(){
    Student * s3 = malloc(sizeof(Student));
    s3->name = "LiSi";
    s3->age = 10;
    free(s3);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // 以下创建的结构体，会在函数执行完毕后销毁，如果需要定义全局的，需要用 malloc 申明
    Student s1 = {"ZhangSan",2};
    Student *s2 = &s1; // 这个会直接把 s2 的内存地址，指向 s1 的内存空间
//    Student s2 = s1; 这样是会拷贝出一个新的结构体

    // (s1.name=ZhangSan,s1.age=2),(s2.name=ZhangSan,s2.age=20)
//    s2.age = 20;
    
    s2->age=20;
    
    printf("(s1.name=%s,s1.age=%d),(s2.name=%s,s2.age=%d)\n",s1.name,s1.age,s2->name,s2->age);
    
    return 0;
}
