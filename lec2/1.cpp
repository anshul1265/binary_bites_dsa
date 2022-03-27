//
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *head = NULL;
void insert(struct node **h)
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
        insert(&head);
    }
    printf("\n");
    printf("\n\nthe linked list is : ");
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}