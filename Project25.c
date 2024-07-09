/*

题目：求 1 + 2! + 3! + ... + 20! 的和。

程序分析：此程序只是把累加变成了累乘。

*/

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
    int number;
    unsigned long long sum = 0;

    for(number = 1; number <= 20; number++)
    {
        sum += func(number);
    }
    
    printf("1 + 2! + 3! + ... + 20! 的和为:%llu\n", sum);

    return 0;
}




