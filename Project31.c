/*
题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。

程序分析：用情况语句比较好，如果第一个字母一样，则判断用情况语句或if语句判断第二个字母。

*/

#include <stdio.h>

int main()
{
    char firsr_char, second_char;
    
    printf("Enter the first letter of the week:\n");
    scanf("%c", &firsr_char);
    getchar(); //scanf("%c",&j);的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个getchar() 吃掉换行符

    switch(firsr_char)
    {
        case 'm':
            printf("monday\n");
            break;
        case 'w':
            printf("wednesday\n");
            break;
        case 'f':
            printf("friday\n");
            break;
        case 's':
            printf("Enter the second letter of the week:\n");
            scanf("%c", &second_char);
            if(second_char == 'u') 
            {
                printf("sunday\n");
                break;
            }
            else if(second_char == 'a')
            {
                printf("saturday\n");
                break;
            }
        case 't':
            printf("Enter the second letter of the week:\n");
            scanf("%c", &second_char);
            if(second_char == 'u') 
            {
                printf("tuesday\n");
                break;
            }
            else if(second_char == 'h')
            {
                printf("thursday\n");
                break;
            }
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}




