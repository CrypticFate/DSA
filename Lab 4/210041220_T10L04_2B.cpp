#include <iostream>
#include <vector>
#include <string>

using namespace std;

int front = 0, rear = 0, maxQ=100;
int s = 0;

void push_front(int *arr, int x)
{
    if(s==maxQ)
    {
        cout << "Overflow" << endl;
    }
    else if(s==0)
    {
        arr[front] = x;
        if(front==0)
            front=maxQ-1;
        else
            front--;
        if(rear==(maxQ-1))
            rear=0;
        else
            rear++;
        s++;
        if (front < rear)
        {
            for (int i = front+1; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        else
        {
            for (int i = front+1; i < maxQ; i++)
            {
                cout << arr[i] << ' ';
            }
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
    else
    {
        arr[front] = x;
        if(front==0)
            front=maxQ-1;
        else
            front--;
        s++;
        if (front < rear)
        {
            for (int i = front+1; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        else
        {
            for (int i = front+1; i < maxQ; i++)
            {
                cout << arr[i] << ' ';
            }
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
}

void push_back(int *arr, int x)
{
    if(s==maxQ)
    {
        cout << "Overflow" << endl;
    }
    else if(s==0)
    {
        arr[front] = x;
        if(front==0)
            front=maxQ-1;
        else
            front--;
        if(rear==(maxQ-1))
            rear=0;
        else
            rear++;
        s++;
    }
    else
    {
        arr[rear] = x;
        if(rear==(maxQ-1))
            rear=0;
        else
            rear++;
        s++;
        if (front < rear)
        {
            for (int i = front+1; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        else
        {
            for (int i = front+1; i < maxQ; i++)
            {
                cout << arr[i] << ' ';
            }
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
}

void pop_front(int *arr)
{
    if (s == 0)
    {
        cout << "Error : Deque is empty" << endl;
    }
    else
    {
        front = (front + 1) % maxQ;
        s--;
        if (front < rear)
        {
            for (int i = front+1; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        else if(front == rear)
        {
            cout << "NULL";
        }
        else
        {
            for (int i = front+1; i < maxQ; i++)
            {
                cout << arr[i] << ' ';
            }
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
}

void pop_back(int *arr)
{
    if (s == 0)
    {
        cout << "Error : Deque is empty" << endl;
    }
    else
    {
        if(rear==0)
            rear=maxQ-1;
        else
            rear--;
        s--;
        if (front < rear)
        {
            for (int i = front+1; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        else if(front == rear)
        {
            cout << "NULL";
        }
        else
        {
            for (int i = front+1; i < maxQ; i++)
            {
                cout << arr[i] << ' ';
            }
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
}

int size(int *arr)
{
    return s;
}


int main()
{
    int i, j, a,maxQ;
    int arr[100];
    while (1)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> j;
            push_front(arr, j);
        }
        else if (a == 2)
        {
            cin >> j;
            push_back(arr,j);
        }
        else if (a == 3)
        {
            pop_front(arr);
        }
        else if (a == 4)
        {
            pop_back(arr);
        }
        else if (a == 5)
        {
            cout << size(arr) << endl;
        }
        else if (a == 6)
        {
            break;
        }
    }
}