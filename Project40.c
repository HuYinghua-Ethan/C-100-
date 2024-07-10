/*

题目：将一个整型数组逆序输出。

程序分析：用第一个与最后一个交换。

*/

#include <stdio.h>
#include <string.h>

void reverse(int *str, int len)
{
    int *start = str;
    int *end = str + len - 1;
    int temp;
    
    while(start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}


int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int k;

    printf("原始数组是:\n");
    for(k = 0; k < 10; k++)
        printf("%d ", arr[k]);
    
    reverse(arr, sizeof(arr) / sizeof(arr[0]));

    printf("\n数组逆序输出为:\n");
    for(k = 0; k < 10; k++)
        printf("%d ", arr[k]);

    return 0;
}











