#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    //insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    //size
    cout<<"the size of the Queue is:"<<q.size()<<endl;
    //removal
    q.pop();
    //front of the queue
    cout<<"The front element of the queue is :"<<q.front()<<endl;
    //isempty
    cout<<q.empty()<<endl;
    return 0;
}