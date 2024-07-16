/*
题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    FILE *fp;
    char str[50];
    int i, len;
    printf("请输入一个字符串\n");
    scanf("%s", str);
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    if((fp=fopen("text", "w")) == NULL)
    {
        printf("erro: cannot open file!\n");
        exit(0);
    }

    fprintf(fp, "%s", str);
    fclose(fp);

    return 0;
}






