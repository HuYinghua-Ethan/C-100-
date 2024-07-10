/*

题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。

程序分析：无。

*/

#include <stdio.h>
#include <string.h>

char* DeleteLetter(char *str, char *letter)
{
    int hash[256] = {0};  //定义一个哈希表
    int i, CurrenIndex = 0;

    if(letter == NULL)  //如果不需要删除特定字母，打印原字符串
        return str;
    
    for(i = 0; i < strlen(str); i++)  //将需要删除的字母存入哈希表
    {
        if(str[i] == *letter)
            hash[(unsigned char)str[i]] = 1;    //这里的哈希表 hash 应该用于标记字符是否需要删除，而不是使用字符的索引。
    }

    for(i = 0; i < strlen(str); i++)  
    {
        if(!(hash[(unsigned char)str[i]]))  //将哈希表中为1的位置删除
        {
            str[CurrenIndex++] = str[i];
        }
    }
    str[CurrenIndex] = '\0'; // 在字符串的末尾添加空字符，以表示字符串的结束

    return str; 
}

int main()
{
    char MyString[256];
    char letter;
    int i;

    printf("Enter a string:\n");
    scanf("%s", MyString);
    getchar();  //消耗掉换行符
    printf("Enter the letter to be deleted:\n");
    scanf("%c", &letter);

    printf("%s", DeleteLetter(MyString, &letter));

    return 0;
}


