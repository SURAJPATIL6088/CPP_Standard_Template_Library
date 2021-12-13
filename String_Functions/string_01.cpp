#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

#define string_name "String Function Called "
#define max_func max(a, b)

int main()
{
    string str;
    // default #define function

    cout<<string_name<<endl;

    cout<<endl;

    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    cout<< s1 + s2 <<endl;

    cout<<s1.substr(13, 20);

    // reverse the string
    
     
    string str1;
    getline(cin, str1);

    cout<<"\nInitial string is : "<<str1;
    
    cout<<"\nReverse string is : ";
    for ( int i= str1.size()-1; i>= 0;i--)
    {
        cout<<str1[i];
    }
    cout<<endl;

    int a, b;
    cin>>a>>b;

    cout<<max_func<<endl;
    //cout<<max(a, b)<<endl;
    return 0;
}