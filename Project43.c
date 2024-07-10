/*
题目：学习使用static的另一用法。　

程序分析：无。



*/

#include <stdio.h>


int main()
{
    int i;
    static int num = 12;
    for(i = 0; i < 3; i++)
    {
        printf("num 变量为 %d\n", num);
        num++;
        {
            static int num = 1;
            printf("局部变量 num 值为 %d\n", num);
            num++;
        }

        {
            static int num = 8;
            printf("局部变量 num 值为 %d\n", num);
            num++;
        }

    }

    return 0;
}









