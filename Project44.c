/*
题目：学习使用如何调用外部函数。

程序分析：无。

*/

#include <stdio.h>

int a, b, c;

void add(void)
{
    int a;
    a = 3;
    c = a + b;
}

int main()
{
    a = b = 4;

    add();
    printf("c = %d\n", c);

    return 0;
}








