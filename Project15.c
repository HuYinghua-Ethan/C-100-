/*
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

程序分析：(a>b)?a:b这是条件运算符的基本例子。

*/

#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter the score:\n");
    scanf("%d", &score);

    if(score >= 90)
        grade = 'A';
    else if(score >= 60)
        grade = 'B';
    else
        grade = 'C';

    printf("The grade is %c\n", grade);

    return 0;
}






