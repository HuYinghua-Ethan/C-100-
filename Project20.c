/*
题目：
一球从100米高度自由落下，每次落地后反跳回原高度的一半；
再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

*/

#include <stdio.h>

int main()
{
    int total_height = 100;
    float bounce_height = 0, sum = 100;  
    int n = 0;
    bounce_height = total_height / 2;
    

    for(n = 2; n <= 10; n++)
    {
        sum += bounce_height * 2;
        bounce_height = bounce_height / 2;
    }

    printf("第10次落地时共经过%f米, 反弹高度为:%f米\n", sum, bounce_height);

    return 0;
}







