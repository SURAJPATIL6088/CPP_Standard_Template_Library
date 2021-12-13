#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;

    // sorted elements in the decresing order
    // it forms biggest number 
    // 109479   ==>> 997410
    sort(str.begin(),str.end(), greater<int>());
    cout<<str<<endl;

    // sorted elements in the increasing order
    // it forms lowest number 
    // 941079   ==>> 104799
    sort(str.begin(), str.end(), less<int>());
    cout<<str<<endl;

    return 0;
}