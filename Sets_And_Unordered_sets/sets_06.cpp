#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>mp;
    // O(1) in almost all the cases
    // O(n) in wrost cases, where n is the size of the container

    string name;

    int n, key;
    cin>>n;

    for( int i =0; i<n; i++)
    {
        cin>>name;
        cin>>key;

        //mp.emplace(name,key);   // insert it will not work good
        mp[name]= key;  // another method for accessing data from user 
    }

    // count operation
    // it always returns only 1 
    string str;
    cin>>str;

    cout<<"count is : "<<mp.count(str)<<endl;

    // erase methods
    string st1;
    cin>>st1;
    
    mp.erase(st1);
    //mp.erase(mp.find(st1));
    //mp.erase(mp.begin(),mp.end());  // it will delete the entire map
    

    //mp.clear(); // it will delete the entire map

    // print the data 
    for(auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    if ( mp.empty())
    {
        cout<<"Yes, map is empty"<<endl;
    }
    else
    {
        cout<<"No, map is not empty"<<endl;
    }

    // print the data
    // for(auto it =mp.begin(); it != mp.end(); it++)  // in this method we use the arrow operator
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    return 0;
}