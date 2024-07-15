/*
题目：倒序输出数组

程序分析：无。
*/

#include <stdio.h>


int main()
{
    int i,j;
    int tmp;
    int arr[5] = {1, 2, 3, 4, 5};
    
    i = 0; j = 4;

    while(i < j)
    {
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
        i++;
        j--;
    }

    printf("数组倒序输出为:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}













