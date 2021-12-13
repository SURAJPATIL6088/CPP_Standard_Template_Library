#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>lst;

    int s, val;
    cout<<"Enter the size of the List "<<endl;
    cin>>s;

    for(int i =0; i<s; i++)
    {
        cin>>val;
        lst.push_back(val);
    }
    cout<<"Original Content of the List :"<<endl;
    for( auto it : lst)
    {
        cout<<it<<" ";
    }

        // it will assign the (-) sign front side of the value
    auto lt = transform(lst.begin(), lst.end(), lst.begin(), negate<int>());

    cout<<"Modified Content of the List :"<<endl;
    for( auto it : lst)
    {
        cout<<it<<" ";
    }
    return 0;
}