#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
Definations of the set

set<data-type>st;

set store only unique elements

consider the set has 5 elements

5
1 5 2 3 5

output: - 1 2 3 5

note: - it gives output in sorted order
*/

int main()
{

    set<int>st;     // simple acess the data 
    // set<int, less<int>>st;       // acess the elements in ascending order
    // set<int, greather<int>>st;   // acess the elements in descending order

    int n;
    cin>>n;

    // insert function
    for( int i =0; i<n; i++)
    {
        int a;
        cin>>a;
        st.insert(a);
    }
    
    for(auto it:st)  // print the data in same way of vector
    {
        cout<<it<<" ";
    }

    return 0;
}