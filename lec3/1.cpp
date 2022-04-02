#include <bits/stdc++.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void insert(struct node **h, int n)
{
    struct node *ptr, *cur;
    cur = new node;
    printf("enter the data in linked list : ");
    scanf("%d", &cur->data);
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
    }
    else
    {
        ptr = *h;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = cur;
    }
}
int main()
{
    int n, i, k;
    struct node *cur, *ptr;
    printf("enter how many no. you want to enter in the linked list : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(&head, i + 1);
    }
    printf("\n");
    int x;
    printf("enter the no. you want to count : ");
    scanf("%d", &x);
    int count = 0;
    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        if (ptr->data == x)
        {
            count++;
        }
    }
    printf("\n\nthe no. of the occurences is : %d", count);
    return 0;
}