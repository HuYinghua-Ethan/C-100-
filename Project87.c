/*
题目：回答结果（结构体变量传递）。

程序分析：无。

*/

/*
函数参数传递： 在 C 语言中，函数参数是通过值传递的。
这意味着当调用函数 f1 时，会创建一个 struct student 类型参数 b 的副本。
因此，对 b 的修改不会影响到调用函数时传递的实际参数。

结构体成员修改： 在函数 f1 内部，对结构体 b 的成员 x 和 c 进行了修改。
由于是值传递，这些修改仅限于函数内部，不会影响到函数外部的结构体变量。

*/

#include "stdio.h"

struct student
{
    int x;
    char c;
}a;

void f1(struct student b)
{
    b.x = 20;
    b.c = 'y';
}

void f2(struct student *b)
{
    b->x = 20;
    b->c = 'y';
}

int main()
{
    a.x = 10;
    a.c = 'x';

    f1(a);
    
    printf("%d,%c\n",a.x, a.c);

    f2(&a);
    printf("%d,%c\n",a.x, a.c);

    return 0;
}







