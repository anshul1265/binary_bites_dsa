#include <bits/stdc++.h>
using namespace std;
struct node
{
    int v;
    struct node *next;
};

typedef struct
{
    struct node *top;
} Stack;

void init(Stack *s)
{
    s->top = NULL;
}

int push(Stack *s, int v)
{
    struct node *cur;
    cur = new node;
    if (cur == NULL)
    {
        printf("Memory full\n");
        return 1;
    }
    cur->v = v;
    cur->next = s->top;
    s->top = cur;
    return 0;
}

int pop(Stack *s, int *a)
{
    if (s->top == NULL)
    {
        printf("Stack Underflow\n");
        return 1;
    }
    struct node *ptr;
    ptr = s->top;
    s->top = s->top->next;
    *a = ptr->v;
    delete ptr;
    return 0;
}

void display(Stack *s)
{
    cout << "The stack is : ";
    for (struct node *ptr = s->top; ptr != NULL; ptr = ptr->next)
    {
        cout << ptr->v << " ";
    }
}

int main()
{
    Stack s1;
    init(&s1);
    int k, l;
    k = push(&s1, 56);
    k = push(&s1, 5);
    k = push(&s1, 6);
    k = pop(&s1, &l);
    if (k == 0)
    {
        cout << "The popped element is : " << l << endl;
    }
    display(&s1);

    return 0;
}