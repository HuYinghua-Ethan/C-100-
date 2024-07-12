/*

题目：打印出杨辉三角形（要求打印出10行）。

程序分析：

结构如下所示：

1
1    1
1    2    1
1    3    3    1
1    4    6    4    1

*/
 
#include <stdio.h>


int main()
{
    int a[10] = {0};
    int temp[10] = {0};
    int n, i, j;

    for(n = 0; n < 10; n++)
    {
        a[0] = 1;
        for(i = 1; i <= n; i++)
        {
            if(i == n)
            {
                a[i] = 1;
            }
            else
            {
                a[i] = temp[i - 1] + temp[i];
            }
        }
        for(j = 0; j <= n; j++)
        {
            temp[j] = a[j];
            printf("%d\t", temp[j]);        
        }
        printf("\n");
    }


    return 0;
}





