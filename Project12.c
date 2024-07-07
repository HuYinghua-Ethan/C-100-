/*
题目：判断 101 到 200 之间的素数。

程序分析：判断素数的方法：用一个数分别去除 2 到 sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n)
{
    int i;

    for(i =2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 1;
        }       
    }

    return 0;
}


int main()
{
    int i,num,flag;

    printf("101 到 200 之间的素数为: \n");
    
    for(num = 101; num <= 200; num++)
    {
        flag = is_prime(num);
        if(flag == 0)
            printf("%d\n", num);
    }

    return 0;
}
