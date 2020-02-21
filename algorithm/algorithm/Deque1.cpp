#include <iostream>
#define MAXSIZE 100

using namespace std;

template<typename T>
class Deque
{
public:
    int front;
    int back;
    int size;
    T* values;

    Deque()
    {
        size = MAXSIZE;
        values = new T[size];
        front = 0;
        back = 0;
    }

    ~Deque()
    {
        delete[] values;
    }

    void push_front(T value)
    {
        if (!isFull())
        {
            front = (front - 1 + size) % size;
            values[front] = value;
        }
        else
            cout << "Stack is Full" << endl;
    }

    void push_back(T value)
    {
        if (!isFull())
        {
            values[back] = value;
            back = (back + 1) % size;
        }
        else
            cout << "Stack is Full" << endl;
    }

    void pop_front()
    {
        if (!empty())
            front = (front + 1) % size;
        else
            cout << "Stack is Empty" << endl;
    }

    void pop_back()
    {
        if (!empty())
            back = (back - 1 + size) % size;
        else
            cout << "Stack is Empty" << endl;
    }

    bool empty()
    {
        if (back == front)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if ((back + 1) % size == front)
            return true;
        else
            return false;
    }
};