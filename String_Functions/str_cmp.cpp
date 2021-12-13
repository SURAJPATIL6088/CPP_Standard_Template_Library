#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

// declare macro 
#define char_size 100

int main()
{
    char ch[20];
    cin>>ch;

    char ch1[20];
    cin>>ch1;

    int n = strcmp(ch, ch1);

    if(n == 0)
    {
        cout<<"Strings are equal"<<endl;    
    }  
    else
    {
        cout<<"Strings are not equal"<<endl;
    }  
    cout<<n<<endl;
    return 0;
}