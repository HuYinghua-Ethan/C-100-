/*
题目：编写input()和output()函数输入，输出5个学生的数据记录。

程序分析：无。
*/

#include <stdio.h>

typedef struct 
{
    char name[20];
    char sex[5];
    int age;
}Stu;

void input(Stu *stu)
{
    int i;
    for(i = 0; i < 5; i++)
        scanf("%s%s%d", stu[i].name, stu[i].sex, &stu[i].age);
}


void output(Stu *stu)
{
    int i;
    for(i = 0; i < 5; i++)
        printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
}


int main()
{
    Stu stu[5];
    printf("请输入5个学生的信息: 姓名 性别 年龄\n");
    input(stu);
    printf("5个学生的信息如下:\n 姓名 性别 年龄\n");
    output(stu);

    return 0;
}



