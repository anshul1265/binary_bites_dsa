/*  */
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int data[5];
    int top;

public:
    void init()
    {
        top = -1;
    }
    int push(int v)
    {
        if (top == 4)
        {
            printf("Stack Overflow\n");
            return 1;
        }
        top++; // s->top = 0
        data[top] = v;
        return 0;
    }
    int pop(int *a)
    {
        if (top == -1)
        {
            printf("Stack Underflow\n");
            return 1;
        }
        *a = data[top];
        top--;
        return 0;
    }
};
int main()
{
    Stack s1;
    s1.init();
    int k = s1.push(4);
    int l;
    k = s1.pop(&l);
    cout << l << endl;
    return 0;
}