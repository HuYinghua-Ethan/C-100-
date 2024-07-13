/*
题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,
当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
*/

#include <stdio.h>


double evennumber(int n)
{
    double sum = 0.0;
    int i;
    for(i = 2; i <= n; i+= 2)
    {
        sum += (double)(1.0 / i);
    }
    return sum;


}

double oddnumber(int n)
{
    double sum = 0.0;
    int i;
    for(i = 1; i <= n; i+= 2)
    {
        sum += 1.0 / i;
    }
    return sum;
}

int main()
{
    int number;
    double res;
    double (*func)(int n);
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number <= 0)
    {
        printf("输入错误\n");
    }
    else if(number % 2 == 0)
    {
        func = evennumber;
    }
    else
    {
        func = oddnumber;
    }
    res = func(number);
    printf("%lf", res);
    

    return 0;
}




