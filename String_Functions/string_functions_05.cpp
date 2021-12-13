// append functions

// string-name1.append(string-name2);

// this function is used for joining the strings 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;

    cout<<s1+s2<<endl;    // ways of the join string

    s1.append(s2);    // using string function 
    cout<<s1<<endl;

    cout<<s1.length()<<endl;   // here it gives the length of the s1 + s2
    return 0;
}