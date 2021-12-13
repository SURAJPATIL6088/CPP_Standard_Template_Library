#include<bits/stdc++.h>
using namespace std;

int main()
{
    // multimap<int>ms

    multiset<int>ms;

    int n, a;
    cin>>n;

    for( int i=0; i<n; i++)
    {
        cin>>a;
        ms.insert(a);
    }

    //reverse(ms.begin(), ms.end());

    // erase methods 

    //ms.erase(ms.begin());
    //ms.erase(ms.end());
    //ms.erase(ms.find(4));

    // it will count the elements how many times repeated
    int c;
    cin>>c;
    cout<<"Count is : "<<ms.count(c)<<endl;
    
    // size of the multiset
    cout<<"Size of the multiset : "<<ms.size()<<endl;

    for( auto it:ms)
    {
        cout<<it<<" ";
    }
    return 0;
}