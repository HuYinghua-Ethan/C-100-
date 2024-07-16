/*
题目：有五个学生，每个学生有3门课的成绩
从键盘输入以上数据（包括学生号，姓名，三门课成绩）
计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中

程序分析：无。


*/

#include <stdio.h>
#include <stdlib.h>


typedef struct Student
{
    int ID;
    int math;
    int English;
    int Chinese;
    float average;
    char name[20];
}Stu;

int main()
{
    FILE *fp;
    Stu stu[5];
    int i, j, sum, count;
    
    printf("请输入5个学生的信息: 学生号, 姓名,3门成绩:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d %s %d %d %d", &stu[i].ID, stu[i].name, &stu[i].math, &stu[i].English, &stu[i].Chinese);
        stu[i].average = (float)(stu[i].math + stu[i].English + stu[i].Chinese) / 3;
    }

    if((fp=fopen("stud", "w")) == NULL)
    {
        printf("error: cannot open file!\n");
        exit(0);
    }

    for(i = 0; i < 5; i++)
    {
        fprintf(fp, "%d %s %d %d %d %.2f\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English, stu[i].Chinese, stu[i].average);
    }
    fclose(fp);

    return 0;
}











