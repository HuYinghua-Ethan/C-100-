/*
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

程序分析：请抓住分子与分母的变化规律。

*/

#include <stdio.h>

int main()
{
    int i, temp;
    float sum = 0;  //总和
    float denominator = 1;  // 分母
    float numerator = 2;    // 分子

    sum += numerator / denominator;

    for(i = 2; i <= 20; i++)
    {
        temp = numerator;
        numerator = denominator + numerator;
        denominator = temp;
        sum += numerator / denominator;
    }

    printf("这个数列的前20项之和为: %f\n", sum);

    return 0;
}







