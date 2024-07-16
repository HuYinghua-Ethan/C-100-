/*
题目：简单的结构体应用实例。

程序分析：无


*/

#include <stdio.h>

struct Data
{
    float constant;
    char *pointer;
};


int main()
{
    struct Data data;
    char str[] = "Hello World";

    data.constant = 3.14159;
    data.pointer = str;

    printf("Constant: %f\n", data.constant);
    printf("Pointer: %s\n", data.pointer);

    return 0;
}









