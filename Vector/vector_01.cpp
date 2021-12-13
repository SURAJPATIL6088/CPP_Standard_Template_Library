/*
Vector in C++

1. push_back(ele);
2. pop_back();
3. front();
4. back();
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //   initialize the vector 
    vector <int>v;

    //   push operation 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5); 
 
    int i;  

    //   these function return the front and back element 
    cout<<"Front element : "<<v.front()<<endl;   // front element
    cout<<"Back element : "<<v.back();   // back element

    cout<<"\nBefore deleting the element : ";
    for( i=0; i <v.size(); i++)   // for display
    {
        cout<<v[i]<<" ";
        
    }
    //   pop the element
    v.pop_back();
    v.pop_back();

    cout<<"\nAfter deleting the element : ";
    for( i=0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nBack element : "<<v.back();
    return 0;
}