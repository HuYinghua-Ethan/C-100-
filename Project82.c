/*
题目：八进制转换为十进制
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int OctalToDecimal(char *OctalNumber)
{
    int length, digit, i, DecimalNumber = 0;
    length = strlen(OctalNumber);

    for(i = 0; i < length; i++)
    {
        digit  = OctalNumber[i] - '0';
        DecimalNumber += digit * pow(8, length - i - 1);
    }
    return DecimalNumber;
    
}

int main()
{
    char OctalNumber[100];
    int DecimalNumber = 0;
    printf("请输入一个八进制数\n");
    scanf("%s", OctalNumber);

    DecimalNumber = OctalToDecimal(OctalNumber);

    printf("八进制数 %s 转换为十进制数是: %d\n", OctalNumber, DecimalNumber);

    return 0;
}



