#include <iostream>
#define MAXSIZE 100

using namespace std;

template<typename T>
class Stack
{
public:
    int top;
    int size;
    T* values;

    Stack()
    {
        size = MAXSIZE;
        values = new T[size];
        top = -1;
    }

    ~Stack()
    {
        delete[] values;
    }

    void push(T value)
    {
        if (!isFull())
            values[++top] = value;
        else
            cout << "Stack is Full" << endl;
    }

    void pop()
    {
        if (!empty())
            top--;
        else
            cout << "Stack is Empty" << endl;
    }

    T Top()
    {
        if (!empty())
            return values[top];
        else
            return NULL;
    }

    bool empty()
    {
        if (top < 0)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top + 1 == size)
            return true;
        else
            return false;
    }
};