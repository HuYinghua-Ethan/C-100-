/*
题目：反向输出一个链表。　

*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;


LinkList ListCreate(int n)
{
    LinkList L, p, q;
    int i;

    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    q = L;

    for(i = 1; i <= n; i++)
    {
        p = (LinkList)malloc(sizeof(LNode));
        printf("请输入第%d个元素\n", i);
        scanf("%d", &(p->data));
        p->next = NULL;
        q->next = p;
        q = p;
    }
    return L;
}


void print(LinkList h)
{
    LinkList p = h->next;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}


int main()
{
    LinkList Head = NULL;
    int len;

    printf("请输入链表的长度:\n");
    scanf("%d", &len);
    Head = ListCreate(len);

    printf("刚建立的各个链表元素的值为:\n");
    print(Head);
 
    return 0;
}



