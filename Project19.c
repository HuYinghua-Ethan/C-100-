/*

题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。
例如6=1＋2＋3.编程找出1000以内的所有完数。

*/
#include <stdio.h>

#define N 1000

int main()
{
    int i, n, j, k, sum;
    int a[500];

    for(n = 2; n < N; n++)
    {
        k = 0;
        sum = a[0] = 1;  //注意sum 每次都要初始化为1

        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                a[++k] = i;
                sum += i;

            }
        }

        if(sum == n)
        {
            printf("%d = %d", n, a[0]);
            for(j = 1; j < k; j++)
            {
                printf("+ %d", a[j]);
            }
            printf("\n");
        }

    }

    return 0;
}









