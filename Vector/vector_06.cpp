/*
Display the output like 

Enter the Row : 3
Enter the Col : 3

Enter the Element that we have to passed : 3

4 5 6 
5 6 7
6 7 8
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int m, n, i, j, val;

    cout<<"\nEnter the Row : ";
    cin>>m;

    cout<<"\nEnter the Col : ";
    cin>>n;

    cout<<"\nEnter the Element that we have to passed : ";
    cin>>val;

    vector<vector<int>>myvec(m, vector<int>(n, val));
    for(i=0; i<m; i++)
    {
        for( j= 0; j<n; j++)
        {
            cout<<myvec[i][j] + i + j + 1<<" ";
        }
        cout<<endl;
    }

    return 0;
}