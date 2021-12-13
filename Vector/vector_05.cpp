/*
Vector in C++

*/

// Define the 10 * 20 vector 
// vector<vector<int>>myvec(10, vector<int>(20, element));         2d vector 

// Define 10 * 20 * 30 
// vector<vector<vector<int>>>myvec( 10, vector<vector<int>>myvec1(20, vector<int>(30, element)))    3d vector 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size, m, n, i, val, ele;
    // cout<<"Enter the size of the vector "<<endl;   // size
    // cin>>size;

    vector<vector<int>> myvec(m, vector<int> (n, ele));

    cout<<"Enter the Row : ";
    cin>>m;

    cout<<"Enter the Col : ";
    cin>>n;

    cout<<"Enter the value for matrix : ";
    cin>>ele;

    // by using vector in stl
    // for( auto ver : myvec) 
    // {
    //     for(auto it : ver)
    //     {
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }

    // common way 
    for ( i=0 ; i<m; i++)
    {
        for( int j=0; j<n; j++)
        {
            cout<<myvec[i][j]<<" ";
        }
        cout<<endl;
    }
    // for( i= 0; i<size; i++)
    // {
    //     cin>>val;
    //     vec1.emplace_back(val);
    // }
    // for(i=0; i<size; i++)
    // {
    //     cout<<vec1[i]<<" ";
    // }
    return 0;
}