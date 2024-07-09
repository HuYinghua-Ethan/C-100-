/*
题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

程序分析：学会分解出每一位数。

*/

#include <stdio.h>


void Is_Palindrome(int num)
{
    int ge, shi, qian, wan;

    ge = num % 10;
    shi = num % 100 /10;
    qian = num % 1000 /10;
    wan = num / 10000;

    if(ge == wan && shi == qian)
        printf("该数是回文数");
    else
        printf("该数是回文数");
        
}
     

int main()
{
    int number;
    printf("请输入一个5位数: ");
    scanf("%d", &number);

    Is_Palindrome(number);

    return 0;
}










