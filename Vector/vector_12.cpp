#include<bits/stdc++.h>
using namespace std;

int main()
{

/* 
    -->  same for integer variables
    
    -> it access only n no. of the string 
    -> it unable to reverse the full string 
    -> 
    ->
*/

    int val;
    int i, n;
    cin>>n;

    vector<int>myvec;// initialize the vector
    vector<int> :: iterator it;

    for( i =0; i< n; i++)
    {
        cin>>val;
        myvec.push_back(val);
    }

    //reverse(myvec.begin(), myvec.end());

    // cout<<"Asending Sorting : ";
    // sort(myvec.begin(),myvec.end(), less<int>());  // asending sorting

    cout<<"Decending Sorting : ";
    sort(myvec.begin(),myvec.end(),greater<int>());  // decending sorting

    for( auto it: myvec)
    {
        cout<<it<<" ";
    }

    cout<<endl;
    // for( auto it = myvec.rbegin(); it != myvec.rend(); it++)
    // {
    //     cout<<*it<<" ";
    // }

    string mystr;

    cin>>mystr;
    
    reverse(mystr.begin(),mystr.end());
    for( auto str : mystr)
    {
        cout<<str;
    }
}