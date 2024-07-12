/*
题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。

程序分析：可以使用一个辅助数组来保存需要移动的元素，然后再将元素按照要求移动到正确的位置。

*/


#include <stdio.h>


void ShiftArray(int arr[], int n, int m)
{
    int temp[m];
    int i, j;

    //保存最后m个数到临时数组
    for(i = n - m, j = 0; i < n; i++, j++)
    {
        temp[j] = arr[i];
    }
    
    //将前面的n-m个数后移m个位置
    for(i = n - m - 1; i >= 0; i--)
    {
        arr[i + m] = arr[i];
    }
    
    //将临时数组中的数放到最前面
    for(i = 0; i < m; i++)
    {
        arr[i] = temp[i];
    }

}


int main()
{
    int n, m, i;
    
    printf("请输入整数个数 n: ");
    scanf("%d", &n);
    printf("请输入向后移动的位置 m:");
    scanf("%d", &m);
    int arr[n];

    printf("请输入%d个整数: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    ShiftArray(arr, n, m);
    printf("移动后的数组为:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


