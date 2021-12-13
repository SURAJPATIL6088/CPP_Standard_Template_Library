#include<bits/stdc++.h>

using namespace std;
#define max 1000
int main()
{
    string str;
    getline(cin, str);

    string original = str;

    // cout<<original<<endl;

    reverse(str.begin(),str.end());
    for(auto i : str)
    {
        cout<<i;
    }
    string i;
    if( original == i)
    {
        cout<<"\nPalindrome string "<<endl;
    }
    else
    {
        cout<<"\nNon Palindrome string "<<endl;
    }
    return 0;
}