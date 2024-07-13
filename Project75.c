/*
题目：输入一个整数，并将其反转后输出。
*/

#include <stdio.h>

void Reverse_Integer(unsigned int n)
{
    if(n > 9)
    {
        printf("%u", n % 10);
        Reverse_Integer(n / 10);
    }
    else
    {
        printf("%u", n % 10);
    }
}

int main()
{
    unsigned int num;
    
    printf("请输入一个整数: ");
    scanf("%u", &num);

    printf("该整数反转后输出为\n");
    Reverse_Integer(num);

    return 0;
}
















