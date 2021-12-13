// here we compare the two strings 

// and check wheather a string is empty or not

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;

       // s2 compare with s1
    
    // if it equal to 0 returns
    // if it greater  1 returns 
    // if it less -1 returns

    int n= s2.compare(s1);
    cout<<n<<endl;
    // cout<<s2.compare(s1)<<endl;    // here it also work

    // empty function
    if (s1.empty())
    {
        cout<<"String is empty"<<endl;
    }
    else
    {
        cout<<"String is not empty"<<endl;
    }
    
    return 0;
}