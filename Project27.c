/*
题目：利用递归函数调用方式，将所输入的5位数，以相反顺序打印出来。

*/

#include <stdio.h>

void char_reverse(int n)
{
    if(n > 9)
    {
        printf("%d", n % 10);

        char_reverse(n / 10);
    }
    else
    {
        printf("%d", n % 10);
    }

}

int main()
{
    unsigned int number;
    printf("请输入一个5位数: ");
    scanf("%d", &number);

    char_reverse(number);

    return 0;
}






