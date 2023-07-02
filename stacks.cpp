#include <iostream>
using namespace std;
class stack
{
    public:
        int top;
        int *arr;
        int size;
    
    stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data)
    {
        if(size-top>1)
        {
            //space available
            //insert
            top++;
            arr[top]=data;
        }
        else{
            //space not available
            cout<<"Stack ovrflow"<<endl;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            //the stack is already empty, and the top is at it's original position
            cout<<"Stack is empty"<<endl;
        }
        else{
            //decrease the top index by 1
            top=top-1;
        }
    }
    int gettop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getsize()
    {
        return top+1;
    }
};
int main()
{
    stack st(5);
    //insertion
    st.push(10);
    st.push(1);
    st.push(11);
    st.push(660);
    st.push(40);
    //removal
    st.pop();
    st.push(20);
    //printing the stack
    while(!st.empty())
    {
        cout<<st.gettop()<<endl;
        st.pop();
    }
}