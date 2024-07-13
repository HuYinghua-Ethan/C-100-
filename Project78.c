/*

题目：找到年龄最大的人，并输出。

程序分析：无。

*/

#include <stdio.h>
#include <string.h>

struct man
{
    char name[20];
    int age;
};

struct man person[3] = {{"li",18},{"wang",25},{"sun",22}};

int main()
{
    struct man *p, *q;
    int i, m = 0;

    p = person;

    for(i = 0; i < 3; i++)
    {
        if(m < p->age)
        {
            m = p->age;
            q = p;
        }
        p++;
    }
    printf("%s %d\n", q->name, q->age);

    return 0;
}



