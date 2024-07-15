/*
题目：一个偶数总能表示为两个素数之和。

程序分析：我去，这是什么题目，要我证明这个问题吗？真不知道怎么证明。那就把一个偶数分解成两个素数吧。


*/

#include <stdio.h>
#include <math.h>

int is_prime(unsigned int num)
{
    int i;

    if(num < 4)
        return 1;
    else if(num % 2 == 0)  //偶数肯定不是素数
        return 0;
    else
    {
        for(i = 3; i < sqrt(num) + 1; i++)
        {
            if(num % i == 0)  //如果能被整除，肯定不是素数
                return 0;
        }
    }
    return 1;
}


int main()
{
    int EvenNumber, i;

    do
    {
        printf("请输入一个偶数:\n");
        scanf("%d", &EvenNumber);
    } while (EvenNumber % 2 != 0);
    
    for(i = 1; i < EvenNumber; i++)
    {
        if(is_prime(i) && is_prime(EvenNumber - i))
            break;
            
    }
    printf("偶数%d 可以分解为 %d 和 %d 两个素数之和\n", EvenNumber, i, EvenNumber - i);
    return 0;
}






