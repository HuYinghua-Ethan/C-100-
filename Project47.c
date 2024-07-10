/*

题目：宏#define命令练习2。

程序分析：无。

*/

/*
在C语言中，宏（macro）与函数不同。
宏是在预处理阶段进行文本替换的，而不是在运行时通过函数调用来执行的。
因此，宏的参数不是形参（formal parameters），而是直接替换为实际参数（actual parameters）。
*/

#include <stdio.h>

#define exchange(a,b) { int t;t=a;a=b;b=t;} //注意放在一行里

// #define exchange(a, b) {\
//     int temp = a;\
//     a = b;\
//     b = temp;}


int main()
{
    int x = 10;
    int y = 20;
    
    printf("x = %d, y = %d\n", x, y);
    exchange(x, y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}


