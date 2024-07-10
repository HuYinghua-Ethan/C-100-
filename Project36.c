/*
题目：求100之内的素数。

程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。


*/
#include <stdio.h> 
#include <math.h>


char is_prime(unsigned int num)
{
    int i;
    for(i = 2; i < sqrt(num); i++)
    {
        if(num % i == 0)
            return 0;
        // else             //这是错误的写法
        //     return 0;
    }
    return 1;
}


int main()
{
    int number;
    char flag;
    for(number = 2; number <= 100; number++)
    {
        flag = is_prime(number);
        if(flag)  //打印素数
            printf("%d ", number);
    }

    return 0;
}





