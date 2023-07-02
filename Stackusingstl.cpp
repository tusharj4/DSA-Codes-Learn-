#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // //creation
    // stack<int> st;//created the stack
    // //insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // //remove
    // st.pop();
    // //check the element on the top of the stack
    // cout<<"element on the top of the stack is :"<<st.top()<<endl;
    // //size
    // cout<<"size of the stack is:"<<st.size()<<endl;
    // if(st.empty())
    //     cout<<"the stack is empty"<<endl;
    // else
    //     cout<<"the stack isn't empty"<<endl;
    // //printing the stack 
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(50);
    st.push(40);
    st.push(30);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
    
}