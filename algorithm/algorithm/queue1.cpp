#include <iostream>
#define MAXSIZE 100

using namespace std;

template<typename T>
class Queue 
{
public:
    int front;
    int rear;
    int size;
    T* values;

    Queue()
    {
        size = MAXSIZE;
        values = new T[size];
        front = 0;
        rear = 0;
    }

    ~Queue()
    {
        delete[] values;
    }

    void push(T value)
    {
        if (!isFull())
        {
            values[rear] = value;
            rear = (rear + 1) % size;
        }
        else
            cout << "Stack is Full" << endl;
    }

    void pop()
    {
        if (!empty())
            front = (front + 1) % size;
        else
            cout << "Stack is Empty" << endl;
    }

    bool empty()
    {
        if (rear == front)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if ((rear + 1) % size == front)
            return true;
        else
            return false;
    }
};