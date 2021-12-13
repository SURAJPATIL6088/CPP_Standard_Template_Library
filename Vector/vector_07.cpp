#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size, i, val;

    vector<int>myvec;

    cout<<"Enter the Size of The vactor : ";
    cin>>size;

    for(i =0; i<size; i++)
    {
        cin>>val;
        myvec.emplace_back(val);
    }
    sort(myvec.begin(), myvec.end());

    cout<<"Sorted Elements is : ";

    // using STL
    for(auto it : myvec)
    {
        cout<<it<<" ";
    }

    // common way
    // for( i= 0; i<size; i++)
    // {
    //     cout<<myvec[i]<<" ";
    // }
    return 0;
}