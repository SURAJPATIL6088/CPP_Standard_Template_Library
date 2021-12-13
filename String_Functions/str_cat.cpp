#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

// declare macro 
#define char_size 100

int main()
{
    char ch[20];
    cin>>ch;    // input from 

    char ch1[30];
    cin>>ch1;

    char ch2[20];
    cin>>ch2;

    strcat(ch,ch1);
    strcat(ch,ch2);
    cout<<ch<<endl;

    return 0;
}