#include<bits/stdc++.h>
#include<string>

using namespace std;

#define max 5

int main()
{
    vector<int>v {1, 2, 3};
    
    // forward iterator
    for(  auto x: v)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // reverse iterator

    vector<int> :: reverse_iterator it;

    for( it= v.rbegin(); it != v.rend(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}