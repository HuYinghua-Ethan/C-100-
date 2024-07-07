/*

题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

程序分析：利用while语句,条件为输入的字符不为'\n'。


*/

#include <stdio.h>

int main()
{
    char my_string;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    printf("Enter a line of characters:\n");
    
    while((my_string = getchar()) != '\n')
    {
        if(my_string >= 'a' && my_string <= 'z' || my_string >= 'A' && my_string <= 'Z')
            letters++;
        else if(my_string == ' ')
            spaces++;
        else if(my_string >= '0' && my_string <= '9')
            digits++;
        else
            others++;   
    }
    printf("digits = %d, letters = %d, spaces = %d, others = %d\n", digits, letters, spaces, others);

    return 0;
}




