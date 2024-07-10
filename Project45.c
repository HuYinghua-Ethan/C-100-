/*
题目：学习使用register定义变量的方法。

程序分析：无。

我们常用的变量存放在内存中！
而register是指寄存器变量。寄存器是cpu的存储部件，即是高速缓存，通常不大，最多几mb
定义这个变量适用于频繁使用某个变量，以加快运行速度，因为保存在寄存器中，省去了从内存中调用
要注意定义了这个变量后，不能去地址!!就是不能使用&符号，这与一般不同

*/

#include <stdio.h>


int main()
{
    register int i;
    int sum;

    for(i = 1; i <= 100; i++)
    {
        sum += i;
    }

    printf("sum = %d\n", sum);

    return 0;
}













