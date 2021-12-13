#include <bits/stdc++.h>
using namespace std;

int main()
{

    // array<int, 4>arr;      // declaring the array
    // arr.fill(4);       // it fill the all element of the array with 4

    // for( auto i= 0; i<4; i++)      // for the dispaly
    // {
    //   cout<<arr.at(i)<<" ";  // 4 4 4 4
    // }

    array<int, 5> arr = {1, 2, 3, 4, 5};

    cout << "order array : ";
    for (auto it = arr.begin(); it != arr.end(); it++) // display the
    {
        cout << *it << " ";
    }

    // rbegin()   rend()
    // it prints the element in the reverse order

    cout << "\nReverse order array : ";
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
    {
        cout << *it << " ";
    }

    cout << "\nExcecute the for each loop : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }

    cout << endl;
    string s = "suraj";
    for (auto d : s)
    {
        cout << d << " ";
    }
    return 0;
}