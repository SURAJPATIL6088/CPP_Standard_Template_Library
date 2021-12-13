// Access the particular element of that array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3, str1;
    cin>>s1>>s2>>s3;

        // using index numbers
        // for access the first character of the string
    cout<<s1[0]<<s2[0]<<s3[0]<<endl;    

        // another method for access
        // using at(index-number) functions
    cout<<s1.at(0)<<s2.at(0)<<s3.at(0)<<endl;

    cin>> str1;
    str1.clear();    // it clear the full string str1
    return 0;
}