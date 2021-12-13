// erase function   (in, ls)
//                   in = index-number from where it start
//                   ls = How Many no.of.delete element (size i.e. 100)

// find function    (s2)
//                   s2 = it is a string input from user

// insert function   (id, s1)
//                    id = for which index number we insert the string
//                    s1 = string name

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    // erase function
    //s1.erase(1, 6);
    //cout << s1 << endl;

    // find function

    // cout << s1.find(s2) << endl; // input -- atcoder code
                                 // output -- 2    >> it returns index number
    // insert function

    s1.insert(2, s2); // input -- atcoder code
    // output -- atcodecoder
     cout<<s1<<endl;
    return 0;
}