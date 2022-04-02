#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;
void insert(struct node **h, int n)
{
    struct node *ptr, *cur;
    cur = new node;
    cur->data = n;
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
    int x;
    printf("\nenter the no. you want to find : ");
    scanf("%d", &x);
    for (ptr = head; ptr != NULL; cur = ptr, ptr = ptr->next)
    {
        if (ptr->data == x)
        {
            printf("found");
            break;
        }
    }
    if (ptr == NULL)
    {
        printf("no. entered is not present");
        return 0;
    }
    printf("\n\n");
    
    return 0;
}