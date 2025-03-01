/*
题目：
有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
问第4个人岁数，他说比第3个人大2岁。
问第三个人，又说比第2人大两岁。
问第2个人，说比第一个人大两岁。
最后问第一个人，他说是10岁。请问第五个人多大？

程序分析：利用递归的方法，递归分为回推和递推两个阶段。要想知道第五个人岁数，需知道第四人的岁数，依次类推，推到第一人（10岁），再往回推。。

*/

#include <stdio.h>

int AgeRecursion(int n)
{
    if(n == 1)
        return 10;

    return AgeRecursion(n-1) + 2;
}

int main()
{
    int people = 5;
    int age = 0;
    
    age = AgeRecursion(people);

    printf("第5个人的年龄为: %d\n", age);

    return 0;
}



