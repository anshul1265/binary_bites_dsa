// Queue with array
#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int data[5];
    int front, rear;
} queu;
void init(queu *q)
{
    q->front = q->rear = -1;
}
bool isfull(queu *q)
{
    if (q->rear == 4)
    {
        cout << "Queue full\n";
        return true;
    }
    else
        return false;
}
bool isempty(queu *q)
{
    if (q->front == -1)
    {
        cout << "Queue empty\n";
        return true;
    }
    else
        return false;
}
int insert(queu *q, int v)
{
    if (q->rear == 4)
    {
        cout << "Queue full\n";
        return 1;
    }
    else if (q->rear == -1)
    {
        q->front = q->rear = 0;
        q->data[q->front] = v;
    }
    else
    {
        q->data[++q->rear] = v;
    }
    return 0;
}
int del(queu *q, int *v)
{
    if (q->front == -1)
    {
        cout << "Queue empty\n";
        return 1;
    }
    else if (q->front == q->rear)
    {
        *v = q->data[q->front];
        q->front = q->rear = -1;
    }
    else
    {
        *v = q->data[q->front];
        q->front++;
    }
    return 1;
}
int main()
{
    queu q1;
    init(&q1);
    int k = insert(&q1, 32);
    int v;
    int l = del(&q1, &v);
    cout << "The deleted value is : " << v;

    return 0;
}