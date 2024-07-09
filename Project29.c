/*
题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。

程序分析：学会分解出每一位数，如下解释。

*/

#include <stdio.h>

// 逆序打印数字
void Number_Reverse(unsigned int n)
{
    if(n > 9)
    {
        printf("%d",n % 10);
        Number_Reverse(n / 10);
    }
    else
    {
        printf("%d",n % 10);
    }

}

int main()
{
    unsigned int number;
    int count = 0;
    printf("请输入一个不多于5位的正整数: ");
    scanf("%d", &number);

    printf("逆序打印各位数字:\n");
    Number_Reverse(number);

    while(number >  0)
    {
        number = number / 10;
        count++;

    }

    printf("\n该数是 %d 位数\n", count);
    
    return 0;
}




