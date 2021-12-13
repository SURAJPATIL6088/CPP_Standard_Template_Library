#include<bits/stdc++.h>
using namespace std;

int main()
{
    // remove the all space from the string 

    vector<string>vec;
    string c;
    int size;
    cout<<"Enter the size of the string "<<endl;

    for(int i=0; i<size; i++)
    {
        cin>>c;
        vec.push_back(c);
    }

    cout<<"Original Content of the Vector :"<<endl;
    for( auto it : vec)
    {
        cout<<it<<" ";
    }

    return 0;
}