#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;

    int x = stoi(s1);    // string to integer
    cout<<x + 66<<endl;  // convert into int, it simple add 64 in it

    int y = stof(s2);   // string to float 
    cout<<y + 0.55<<endl; // // convert into float, it simple add 0.55 in it

    int z = stod(s3);   // string to double
    cout<<fixed<<setprecision(4)<<z + 0.5<<endl; // // convert into double, it simple add 0.50 in it

    int n;
    cin>>n;

    cout<<to_string(n)<<endl;
    
    return 0;
}