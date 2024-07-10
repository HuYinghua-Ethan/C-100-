/*
题目：对10个数进行排序。(选择排序)

程序分析：可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换， 下次类推，即用第二个元素与后8个进行比较，并进行交换。

*/

#include <stdio.h>


// 选择排序
void selection_sort(int nums[])
{
    int i, j, temp;

    for(i = 0; i < 9; i++)
    {
        int k = i;
        
        for(j = i + 1; j < 10; j++)
        {
            if(nums[j] < nums[k])
            {
                k = j;
            }
        }

        temp = nums[i];
        nums[i] = nums[k];
        nums[k] = temp;
    }

}


int main()
{
    int numbers[10] = {5, 3, 8, 6, 2, 7, 1, 9, 4, 0};
    int n;

    selection_sort(numbers);

    printf("经过选择排序后 numbers 数组为：\n");
    for(n = 0; n < 10; n++)
    {
        printf("%d ", numbers[n]);
    }

    return 0;
}









