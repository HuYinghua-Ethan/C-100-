/*
题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。
*/

#include <stdio.h>

// 排列组合
void Permutation(void)
{
    int i, j, k;
    int count = 0;

    for(i = 1; i <=4; i++)
    {
        for(j = 1; j <=4; j++)
        {
            for(k = 1; k <=4; k++)
            {
                if(i != j && j!= k && i != k)
                {
                    printf("%d,%d,%d\n", i, j, k);
                    count++;
                }
            }
        }
    }

    printf("能组成 %d 个互补相同且无重复数组的三位数\n", count);
}


int main()
{
    Permutation();
    return 0;
}














