/*
题目：#if #ifdef和#ifndef的综合应用。

程序分析：无

*/

#include <stdio.h>

#define MAX
#define MAXIMUM(x, y) ((x) > (y) ? (x) : (y))
#define MINIMUM(x, y) ((x) > (y) ? (y) : (x))


int main()
{
    int a = 10, b = 20;
    
#ifdef MAX
    printf("The max number is %d\n", MAXIMUM(a, b));
#else
    printf("The mini number is %d\n", MINIMUM(a, b));
#endif

#ifdef MIN
    printf("The mini number is %d\n", MINIMUM(a, b));
#else
    printf("The max number is %d\n", MAXIMUM(a, b));
#endif

#undef MAX   //undef 用来将前面定义的宏标识符取消定义
#ifdef MAX
    printf("The max number is %d\n", MAXIMUM(a, b));
#else
    printf("The mini number is %d\n", MINIMUM(a, b));
#endif

#define MIN
#ifdef MIN
    printf("The mini number is %d\n", MINIMUM(a, b));
#else
    printf("The max number is %d\n", MAXIMUM(a, b));
#endif


    return 0;
}






