// insertion in double linked list

#include <bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prv, *next;
    int data;
};
void create(struct node **h)
{
    struct node *cur, *ptr;
    ptr = *h;
    cur = new node;
    cur->prv = cur->next = NULL;
    printf("enter the data : ");
    scanf("%d", &cur->data);
    if (*h == NULL)
    {
        *h = cur;
        ptr = cur;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = cur;
        cur->prv = ptr;
    }
}
void display(struct node *h)
{
    while (h != NULL)
    {
        printf("%d ", h->data);
        h = h->next;
    }
}
void insert(struct node **h, int x)
{
    struct node *ptr, *cur;
    ptr = *h;
    cur = new node;
    cur->next = cur->prv = NULL;
    printf("\nenter the data you want to insert at the position %d : ", x);
    scanf("%d", &cur->data);
    for (int i = 0; i < x - 1; i++)
    {
        ptr = ptr->next;
    }
    cur->prv = ptr;
    cur->next = ptr->next;
    ptr->next->prv = cur;
    ptr->next = cur;
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
    display(head);
    int x;
    printf("\nenter the position where you want to insert : ");
    scanf("%d", &x);
    insert(&head, x);
    printf("\nthe after node is : \n");
    display(head);
    return 0;
}