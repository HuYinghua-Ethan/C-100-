/*
题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。

程序分析：无。

*/

#include <stdio.h>

int length(char* pstr)
{
    int len = 0;
    while(*pstr++ != '\0')
    {
        len++;
    }
    return len;
}


int main()
{
    char MyString[256];
    int len;

    printf("请输入字符串:\n");
    scanf("%s", MyString);

    len = length(MyString);

    printf("字符串的长度为%d\n", len);

    return 0;
}




