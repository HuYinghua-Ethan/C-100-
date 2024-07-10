/*

题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

*/

#include <stdio.h>
#include <string.h>

void string_reverse(char *str)
{
    int i;
    char temp;
    char *start = str;  //开头
    char *end = str + strlen(str) - 1; //末尾

    while(start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }

}

int main()
{
    char My_String[256];
    
    printf("Enter a string:\n");
    scanf("%s", My_String);

    string_reverse(My_String);

    printf("Reverse the string: %s\n", My_String);

    return 0;
}


