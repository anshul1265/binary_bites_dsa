// Queue with linked list
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct
{
    struct node *front, *rear;
} queu;
void init(queu *q)
{
    q->front = q->rear = NULL;
}
int insert(queu *q, int v)
{
    struct node *cur;
    cur = new struct node;
    if (cur == NULL)
    {
        return 1; // memory over
    }
    cur->data = v;
    cur->next = NULL;
    if (q->front == NULL)
    {
        q->front = q->rear = cur;
    }
    else
    {
        q->rear->next = cur;
        q->rear = cur;
    }
    return 0;
}
int del(queu *q, int *v)
{
    if (q->front == NULL)
    {
        cout << "Queue empty\n";
        return 1;
    }
    else if (q->front == q->rear)
    {
        *v = q->front->data;
        q->front = q->rear = NULL;
        delete q->front;
    }
    else
    {
        *v = q->front->data;
        struct node *ptr;
        ptr = q->front;
        q->front = q->front->next;
        delete ptr;
    }
    return 0;
}
int main()
{
    queu q1;
    init(&q1);
    int k, l, v;
    k = insert(&q1, 24);
    l = del(&q1, &v);
    cout << "The deleted value is : " << v;
    return 0;
}