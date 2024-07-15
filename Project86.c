/*
题目：两个字符串连接程序 。

*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>

char* StringConnect(char *str1,char *str2)
{
    char *str = (char*)malloc(sizeof(str1) + sizeof(str2) + 1);
    str[0] = '\0';
    strcat(str, str1);
    strcat(str, str2);

    return str;
}


int main()
{
    char str1[20], str2[20];
    char *str;

    printf("请输入两个字符串:\n");
    scanf("%s%s", str1, str2);
    
    str = StringConnect(str1, str2);
    
    printf("连接后的字符串为:%s\n", str);

    return 0;
}







