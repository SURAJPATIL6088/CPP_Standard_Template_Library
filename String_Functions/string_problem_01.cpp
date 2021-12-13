#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    // using string functions
    
    // convert lower case to upper case

    string str;
    cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if( str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32; 
        }    
    }
    cout<<str<<endl;

    // convert upper case to lower case

    string str1;
    cin>>str1;

    //cout<<'A'-'a'<<endl;
    for( int i =0; i<str1.size(); i++)
    {
        if( str1[i] >= 'A' && str1[i] <= 'Z');
        {
            str1[i] += 32;
        }
    }

    cout<<str1<<endl;


    // using STL 

    string str2;
    cin>>str2;

    transform(str2.begin(), str2.end(), str2.begin(), :: toupper);
    cout<<str2<<endl;

    string str3;
    cin>>str3;

// uppercase to lowerCase
    transform(str3.begin(), str3.end(), str3.begin(), :: tolower);
    cout<<str3<<endl;

    return 0;
}