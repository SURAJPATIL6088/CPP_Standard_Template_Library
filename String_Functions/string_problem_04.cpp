// strpbrk(str-name1, str-name2);



#include <bits/stdc++.h>
using namespace std;

#define max 1000
#define min 50

/*
int main()
{
    // print how many times character repeated in string
    char c[max];
    //cin >> c;
    cin.getline(c, max); // for accessing the characters with spaces

    char ch[min];
    //cin >> ch;
    cin.getline(ch, min);

    char *ptr;
    ptr = strpbrk(c, ch);

    while (ptr != NULL)
    {
        cout << *ptr;
        ptr = strpbrk(ptr + 1, ch);
    }

    return 0;
}

*/

int main()
{
    // count how many times character are repeated
    /*
    ex. suraj patil
        a
        count is 2
    */
    
    char c[max];
    cin.getline(c, max);

    char ch[min];
    cin.getline(ch, min);

    int count =0;

    char *ptr;
    ptr = strpbrk(c, ch);

    while( ptr != NULL)
    {
        ptr = strpbrk(ptr+1, ch);
        count++;
    }
    cout<<"count is "<<count <<endl;
    return 0; 
}