/*
题目：
两个乒乓球队进行比赛，各出三人。
甲队为a,b,c三人，乙队为x,y,z三人。
已抽签决定比赛名单。有人向队员打听比赛的名单。
a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

*/

#include <stdio.h>


int main()
{
    char a, b, c;
    
    for(a = 'x'; a <= 'z'; a++)
    {
        for(b = 'x'; b <= 'z'; b++)
        {
            if(a != b)
            {
                for(c = 'x'; c <= 'z'; c++)
                {
                    if(a != c && b != c)
                    {
                        if(a != 'x' && c != 'x' && c != 'z')
                        {
                            printf("a -- %c, b -- %c, c -- %c\n", a, b, c);
                        }
                    }
                }
            }
        }
    }

    return 0;
}








