// insertion in circular linked list

#include <bits/stdc++.h>
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
    cur = new node;
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
void insert(struct node **h, int x)
{
    struct node *ptr, *cur;
    ptr = *h;
    cur = malloc(sizeof(struct node));
    cur->next = NULL;
    printf("\nenter the data you want to insert : ");
    scanf("%d", &cur->data);
    if (x == 0)
    {
        while (ptr->next != *h)
        {
            ptr = ptr->next;
        }
        cur->next = *h;
        *h = cur;
        ptr->next = cur;
    }
    else
    {
        for (int i = 0; i < x - 1; i++)
        {
            ptr = ptr->next;
        }
        cur->next = ptr->next;
        ptr->next = cur;
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
    printf("\nenter the position where you want to insert the data : ");
    int x;
    scanf("%d", &x);
    insert(&head, x);
    printf("\nthe after node is : \n");
    display(&head);
    return 0;
}
