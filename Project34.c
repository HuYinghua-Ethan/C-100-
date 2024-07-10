/*
题目：练习函数调用。

*/

#include <stdio.h>

void hello_world(void)
{
    printf("Hello World!\n");
}

void three_hellos(void)
{
    int counter;
    
    for(counter = 0; counter < 3; counter++)
    {
        hello_world();  //调用此函数
    }

}


int main()
{
    three_hellos();  //调用此函数

    return 0;
}






