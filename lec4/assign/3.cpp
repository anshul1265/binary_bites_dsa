// deletion in circular linked list


#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *next;
    int data;
};
void create(struct node **h)
{
    struct node *cur, *ptr;
    ptr = *h;
    cur = malloc(sizeof(struct node));
    cur->next = NULL;
    printf("enter the data : ");
    scanf("%d", &cur->data);
    if (*h == NULL)
    {
        *h = cur;
        cur->next = *h;
    }
    else
    {
        while (ptr->next != *h)
        {
            ptr = ptr->next;
        }
        ptr->next = cur;
        cur->next = *h;
    }
}
void display(struct node **h)
{
    struct node *ptr;
    ptr = *h;
    while (ptr->next != *h)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}
void del(struct node **h, int x)
{
    struct node *ptr, *cur;
    ptr = cur = *h;
    if (x == 0)
    {
        while (ptr->next != *h)
        {
            ptr = ptr->next;
        }
        *h = cur->next;
        ptr->next = *h;
        delete cur;
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            cur = ptr;
            ptr = ptr->next;
        }
        cur->next = ptr->next;
        free(ptr);
    }
}
int main()
{
    struct node *head;
    head = NULL;
    printf("enter the no. of nodes you want to create : ");
    int l; // l is the no. of nodes you want to create
    scanf("%d", &l);
    for (int i = 0; i < l; i++)
    {
        create(&head);
    }
    printf("\nthe before node is : \n");
    display(&head);
    printf("\nenter the position where you want to delete the data : ");
    int x;
    scanf("%d", &x);
    del(&head, x);
    printf("\nthe after node is : \n");
    display(&head);
    return 0;
}
