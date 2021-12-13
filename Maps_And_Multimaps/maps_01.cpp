#include<bits/stdc++.h>
using namespace std;

// map

int main()
{
    int n;
    cin>>n;

    map<string, int>mpp;

    string str;
    int s;

    for( int i =0; i<n; i++)
    {
        cin>>str>>s;
        mpp.emplace(str,s);
    }

    for( auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<" ";
    }
    return 0;
}