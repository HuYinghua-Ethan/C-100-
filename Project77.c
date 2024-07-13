/*

题目：填空练习（指向指针的指针）。

程序分析：无。

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char const *s[] = {"man","woman","girl","boy","sister"};
    char const **q;
    int i;
    
    for(i = 0; i < 5; i++)
    {
        q = &s[i];
        printf("%s\n", *q);
    }

    return 0;
}

