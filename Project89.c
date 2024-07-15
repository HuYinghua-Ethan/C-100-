/*
题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，
加密规则如下： 每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。

*/

#include <stdio.h>

void swap(int *num1, int *num2)
{
    int tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}


int main()
{
    int num; 
    int indiv_num, ten_num, hund_num, thous_num;
    printf("请输入一个四位整数:\n");
    scanf("%d", &num);

    indiv_num = num % 10;
    ten_num = (num / 10) % 10;
    hund_num = (num / 100) % 10;
    thous_num = (num / 1000) % 10;

    //每位数字都加上5,然后用和除以10的余数代替该数字
    indiv_num = (indiv_num + 5) % 10;
    ten_num = (ten_num + 5) % 10;
    hund_num = (hund_num + 5) % 10;
    thous_num = (thous_num + 5) % 10;
    
    //将第一位和第四位交换
    swap(&indiv_num, &thous_num);

    //将第二位和第三位交换
    swap(&ten_num, &hund_num);

    printf("加密后的数字是:%d", thous_num * 1000 + hund_num * 100 + ten_num * 10 + indiv_num);

    return 0;
}



/*-------------------------------------------------------------------------------------------------------*/
/* 用数组 */

// int main()
// {
//     int a, i, aa[4], t;
//     printf("请输入四位数字：");
//     scanf("%d",&a);
//     aa[0]=a % 10;
//     aa[1]=a % 100 / 10;
//     aa[2]=a % 1000 / 100;
//     aa[3]=a / 1000;
    
//     for(i = 0; i <= 3; i++)
//     {
//         aa[i] += 5;
//         aa[i] %= 10;
//     }
//     for(i = 0; i <= 3/2; i++)
//     {
//         t = aa[i];
//         aa[i] = aa[3-i];
//         aa[3-i] = t;
//     }

//     printf("加密后的数字：");
//     for(i = 3; i >= 0; i--)
//         printf("%d",aa[i]);
//     printf("\n");
// }

