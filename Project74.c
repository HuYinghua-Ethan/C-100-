/*
题目：连接两个链表。
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;


LinkList delete_node(LinkList pointer, LinkList tmp)
{
    if(tmp == NULL)   /*delete first node*/
        return pointer->next;
    else
    {
        if(tmp->next->next == NULL) /*delete last node*/
            tmp->next = NULL;
        else
            tmp->next = tmp->next->next;
        return pointer;
    }
}

void selection_sort(LinkList pointer, int num)
{
    LinkList tmp, btmp;
    int i, min;
    for(i = 0; i < num; i++)
    {
        tmp = pointer;
        min = tmp->data;
        btmp = NULL;
        while(tmp->next)
        {
            if(min > tmp->next->data)
            {
                min = tmp->next->data;
                btmp = tmp;
            }
            tmp = tmp->next;
        }
        printf("\40: %d\n", min);
        pointer = delete_node(pointer, btmp);
    }
}

LinkList create_list(int array[],int num)
{
    LinkList tmp1, tmp2, pointer;
    int i;
    pointer = (LinkList)malloc(sizeof(LNode));
    pointer->data = array[0];
    tmp1 = pointer;
    for(i = 1; i < num; i++)
    {
        tmp2 = (LinkList)malloc(sizeof(LNode));
        tmp2->next = NULL;
        tmp2->data = array[i];
        tmp1->next = tmp2;
        tmp1 = tmp1->next;
    }
    return pointer;
}

LinkList concatenate(LinkList pointer1,LinkList pointer2)
{
    LinkList tmp;
    tmp = pointer1;
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = pointer2;
    return pointer1;
}

int main()
{
    int arr1[]={3,12,8,9,11};
    LinkList ptr;
    ptr = create_list(arr1,5);
    selection_sort(ptr,5);

    return 0;
}



