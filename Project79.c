/*
题目：字符串排序。
*/

/*
strcpy() 是C语言标准库中的一个函数，用于将一个字符串复制到另一个字符串中。其函数原型如下：

char *strcpy(char *dest, const char *src);
参数解释：
dest：目标字符串的指针，即要将源字符串复制到的位置。
src：源字符串的指针，即要复制的字符串。
strcpy() 函数会将 src 指向的字符串（包括终止符 \0）复制到 dest 指向的位置。复制完成后，dest 指向的字符串将包含与 src 相同的字符序列。

需要注意的是，dest 必须有足够的空间来容纳 src 字符串及其终止符 \0，否则会导致缓冲区溢出。
*/


#include <stdio.h>
#include <string.h>
#include <string.h>

void swap(char* str1, char* str2)
{
    char temp[20];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    
}


/*
fgets(str1, (sizeof str1 / sizeof str1[0]), stdin);
fgets 函数：
fgets 是C标准库中的一个函数，用于从文件或标准输入读取字符串。函数原型为：char *fgets(char *str, int n, FILE *stream);
参数解释：
str：指向字符数组的指针，用于存储读取的字符串。
n：最多读取的字符数（包括终止符 \0）。
stream：输入流，通常是文件指针或标准输入 stdin。
str1：str1 是一个字符数组，用于存储从标准输入读取的字符串。
(sizeof str1 / sizeof str1[0])：sizeof str1 返回 str1 数组的总字节数。
sizeof str1[0] 返回 str1 数组中第一个元素的字节数（即一个字符的字节数，通常是1）。
(sizeof str1 / sizeof str1[0]) 计算出 str1 数组的总元素个数，即数组的长度。
stdin：stdin 是标准输入流的文件指针，通常代表键盘输入。
*/

/*
strcmp() 是C语言标准库中的一个函数，用于比较两个字符串。其函数原型如下：
int strcmp(const char *str1, const char *str2);
参数解释：
str1：指向第一个字符串的指针。
str2：指向第二个字符串的指针。
strcmp() 函数会比较 str1 和 str2 指向的字符串，并返回一个整数值，表示比较结果：
如果 str1 和 str2 相等，返回值为 0。
如果 str1 小于 str2，返回值小于 0。
如果 str1 大于 str2，返回值大于 0。
字符串的比较是逐字符进行的，直到遇到不同的字符或终止符 \0。比较时，字符的ASCII值决定了它们的大小关系。
*/

int main()
{
    char str1[20], str2[20], str3[20];
    printf("请输入三个字符串, 每个字符串以回车结束!:\n");
    fgets(str1, (sizeof str1 / sizeof str1[0]), stdin);
    fgets(str2, (sizeof str2 / sizeof str2[0]), stdin);
    fgets(str3, (sizeof str3 / sizeof str3[0]), stdin);

    if(strcmp(str1,str2)>0)
        swap(str1, str2);
    if(strcmp(str2,str3)>0)
        swap(str2, str3);
    if(strcmp(str1,str2)>0)
        swap(str1, str2);

    printf("排序后的结果为：\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}

