/*

题目：输入3个数a,b,c，按大小顺序输出。

程序分析：利用指针方法。

*/

#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp;

    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

}

int main()
{
    int a, b, c;

    printf("请输入三个整数\n");
    scanf("%d%d%d", &a, &b, &c);

    swap(&a, &b);
    swap(&a, &c);
    swap(&b, &c);

    printf("按大小顺序输出：%d %d %d\n", a, b, c);

    return 0;
}


