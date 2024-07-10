/*
题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

程序分析：首先判断此数是否大于最后一个数,然后再考虑插入中间的数的情况,插入后此元素之后的数,依次后移一个位置。


*/
#include <stdio.h>

void insert(int nums[], int num)
{
    int i, j;

    if(num > nums[9])  //判断此数是否大于最后一个数
        nums[10] = num;
    else
    {
        for(i = 0; i < 10; i++)
        {
            if(num < nums[i])
            {
                for(j = 10; j > i;  j--)
                {
                    nums[j] = nums[j-1];
                }
                nums[i] = num;
                break;
            }
        }
    }
}

int main()
{
    int numbers[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
    int number, k;
    
    printf("原始数组是:\n");
    for(k = 0; k < 10; k++)
        printf("%d ", numbers[k]);

    printf("\n请输入要插入的一个数:\n");
    scanf("%d", &number);

    insert(numbers, number);

    for(k = 0; k < 11; k++)
        printf("%d ", numbers[k]);
    
    return 0;
}









