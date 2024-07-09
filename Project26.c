/*
题目：利用递归方法求5!。

程序分析：递归公式：fn=fn_1*4!

*/

//计算阶乘

#include <stdio.h>

//递归计算阶乘
unsigned long long func(int n)
{
    if(n == 1)
        return 1;

    return n * func(n - 1);
}

int main()
{
    int n;
    unsigned long long factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial = func(n);

    printf("%d的阶乘为: %d\n", n, factorial);

    return 0;
}




