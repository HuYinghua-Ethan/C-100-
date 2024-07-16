/*
题目：计算字符串中子串出现的次数 。

程序分析：无。

*/

#include <stdio.h>
#include <string.h>


int main()
{
    int i, j, k, PLen, TLen, count = 0;
    char P[50], T[10];
    
    printf("请输入母串:\n");
    scanf("%s", P);
    printf("请输入子串:\n");
    scanf("%s", T);

    PLen = strlen(P);
    TLen = strlen(T);

    for(i = 0; i <= PLen - TLen; i++)
    {
        for(j = 0, k = i; j < TLen && T[j] == P[k]; j++, k++);
        
        if(j == TLen)
            count++;
    }

    printf("母串中含有字串的个数为:%d", count);

    return 0;
}


