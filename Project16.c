/*
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。

程序分析：

（1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；

（2）求最大公约数用辗转相除法（又名欧几里德算法）

1）证明：设c是a和b的最大公约数，记为c=gcd(a,b),a>=b,
令r=a mod b
设a=kc，b=jc，则k，j互素，否则c不是最大公约数
据上，r=a-mb=kc-mjc=(k-mj)c
可知r也是c的倍数，且k-mj与j互素，否则与前述k，j互素矛盾,
由此可知，b与r的最大公约数也是c，即gcd(a,b)=gcd(b,a mod b)，得证。

2）算法描述：

第一步：a ÷ b，令r为所得余数（0≤r 第二步：互换：置 a←b，b←r，并返回第一步。

*/

#include <stdio.h>

void swap(int *n1, int *n2)
{
    int temp;
    if(*n1 < *n2)
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}


int main() 
{
    int num1 = 0, num2 = 0, product = 0, r = 0;

    printf("请输入两个正整数:\n");
    scanf("%d %d", &num1, &num2);

    product = num1 * num2;
    swap(&num1, &num2);  //使得 num1 > num2
    r = num1 % num2;

    while(r != 0)
    {
        num1 = num2;
        num2 = r;
        r = num1 % num2;
    }

    printf("最大公约数为: %d\n", num2);
    printf("最小公倍数为: %d\n", product / num2);

    return 0;

}


