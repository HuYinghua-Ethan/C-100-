/*
题目：输入三个整数x,y,z，请把这三个数由小到大输出。

程序分析：
我们想办法把最小的数放到x上，先将x与y进行比较，
如果x>y则将x与y的值进行交换，然后再用x与z进行比较，
如果x>z则将x与z的值进行交换，这样能使x最小。

*/

#include <stdio.h>

void min_sort(int *num1, int *num2)
{
    int temp;
    if(*num1 > *num2)
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}

int main()
{
    int x, y, z;
    printf("请输入三个整数: ");
    scanf("%d%d%d", &x, &y, &z);

    min_sort(&x, &y);
    min_sort(&x, &z);
    min_sort(&y, &z);

    printf("从小到大排序为: %d %d %d\n", x, y, z);

    return 0;
}


