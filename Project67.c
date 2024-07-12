/*

题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

*/

#include <stdio.h>

void max_swap(int nums[], int length)
{
    int j, max_index, temp;
    max_index = 0;

    for(j = 1; j < length; j++)
    {
        if(nums[j] > nums[max_index])
        {
            max_index = j;  //记录最大值的索引
        }
    }
    temp = nums[0];
    nums[0] = nums[max_index];
    nums[max_index] = temp;

}


void min_swap(int nums[], int length)
{
    int j, min_index, temp;
    min_index = 0;

    for(j = 1; j < length; j++)
    {
        if(nums[j] < nums[min_index])
        {
            min_index = j;  //记录最小值的索引
        }
    }
    temp = nums[length - 1];
    nums[length - 1] = nums[min_index];
    nums[min_index] = temp;

}

int main()
{
    int arr[20], len, i;
    printf("设置数组的长度:\n");
    scanf("%d", &len);
    printf("输入 %d 个元素: \n", len);
    for(i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_swap(arr, len);
    min_swap(arr, len);

    for(i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}





