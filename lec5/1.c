/*  */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int data[5];
    int top;
} stack;
void init(stack *s)
{
    s->top = -1;
}
int push(stack *s, int v)
{
    if (s->top == 4)
    {
        printf("Stack Overflow\n");
        return 1;
    }
    s->top++; // s->top = 0
    s->data[s->top] = v;
    return 0;
}
int pop(stack *s, int *a)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        return 1;
    }
    *a = s->data[s->top];
    s->top--;
    return 0;
}
int main()
{
    stack s1;
    init(&s1);
    // s1.top = -1;
    int k;
    k = push(&s1, 13);
    k = push(&s1, 14);
    k = push(&s1, 12);
    k = push(&s1, 1);
    k = push(&s1, 19);
    k = push(&s1, 15);
    int a;
    k = pop(&s1, &a);
    printf("The popped element is : %d\n", a);
    k = pop(&s1, &a);
    printf("The popped element is : %d\n", a);
    k = pop(&s1, &a);
    printf("The popped element is : %d\n", a);
    k = pop(&s1, &a);
    printf("The popped element is : %d\n", a);
    k = pop(&s1, &a);
    printf("The popped element is : %d\n", a);
    k = pop(&s1, &a);
    printf("The popped element is : %d\n", a);
    return 0;
}