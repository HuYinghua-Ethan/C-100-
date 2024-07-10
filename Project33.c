/*
题目：判断一个数字是否为质数。

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
    }
    return 1;
}


int main()
{
    unsigned int number;
    printf("Enter a number:\n");
    scanf("%d", &number);

    if(is_prime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}




