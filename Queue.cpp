#include <iostream>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    void push(int data)
    {
        if(rear==size)
        {
            cout<<"The Queue is empty"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }
    int getfront()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty()
    {
        if(front==rear)
        {
            return true;
        }
        return false;
    }
    int getSize()
    {
        return rear-front;
    }
};
int main()
{
    Queue qt(10);
    qt.push(10);
    qt.push(20);
    qt.push(30);
    qt.push(40);
    cout<<"the size of the Queue is:"<<qt.getSize()<<endl;
    //removal
    qt.pop();
    //front of the queue
    cout<<"The front element of the queue is :"<<qt.getfront()<<endl;
    //isempty
    cout<<qt.isEmpty()<<endl;
    return 0;
}