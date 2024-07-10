/*
题目：学习使用按位与 &。

程序分析：0&0=0; 0&1=0; 1&0=0; 1&1=1 。

*/

#include <stdio.h>


int main()
{
    int a, b;
    a = 077;  //数字前面带有 0 的情况下，表示这个数字是八进制（Octal）的。因此，077 是八进制表示的数字。
    b = a & 3;
    printf("a & b(decimal) is %d\n", b);
    b &= 7;
    printf("a & b(decimal) is %d\n", b);

    return 0;
}






