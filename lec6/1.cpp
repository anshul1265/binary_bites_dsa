//
#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int data[5];
    int top = -1;

public:
    void init()
    {
        top = -1;
    }
    bool isfull()
    {
        if (top == 4)
        {
            return true;
        }
        return false;
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
    int push(int v)
    {
        if (isfull())
        {
            printf("Stack Overflow\n");
            return 1;
        }
        top++;
        data[top] = v;
        return 0;
    }
    int pop(int *a)
    {
        if (isempty())
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
    int k, l;
    k = s1.push(7);
    k = s1.pop(&l);
    cout << "The popped element is : " << l << endl;
    k = s1.push(17);
    k = s1.pop(&l);
    cout << "The popped element is : " << l << endl;
    k = s1.push(237);
    k = s1.pop(&l);
    cout << "The popped element is : " << l << endl;
    k = s1.push(47);
    k = s1.pop(&l);
    cout << "The popped element is : " << l << endl;
    k = s1.push(87);
    k = s1.pop(&l);
    cout << "The popped element is : " << l << endl;
    k = s1.push(447);
    k = s1.pop(&l);
    cout << "The popped element is : " << l << endl;

    return 0;
}