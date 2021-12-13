#include<bits/stdc++.h>
using namespace std;

int main()
{
    // stack

    // push
    // pop
    // top
    // size
    // empty


    cout<<"Stack follows LIFO ( last in first out ) Principle "<<endl;
    stack<int>st;

    // cout<<st.top()<<endl;   // it will trows an error

    int n;
    cin>>n;

    for( int i=0; i<n;i++)
    {
        int a;
        cin>>a;

        st.emplace(a);
    }
    cout<<"size of the stack "<<st.size()<<endl;
    
    if(!st.empty())
    {
        cout<<"Stack is Not empty "<<endl;
        cout<<"Top element is "<<st.top()<<" ";
    }

    // delete the entire stack
    if (!st.empty())
    {
        st.pop();
    }
    return 0;
}