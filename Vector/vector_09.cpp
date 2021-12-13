// clear
// erase

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, size;

    cout << "Enter the size of the vector : ";
    cin >> size;

    vector<int> vec;
    vector<int>::iterator it1, it2;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the Push Element : ";
        cin >> n;
        vec.push_back(n);
    }

    //vec.clear();    // clear function clear all the elements of the vector
    // it is declare before the display functions

    //vec.erase(it);   // it is medentary to define iterator // all elements are erase

    // vec.erase(vec.begin());     // will delete the first element
    // vec.erase(vec.begin(), vec.begin() + 3);  // it will delete first to at 3 indx number
    vec.erase(vec.begin() + 3); // it will delete at specific element

    //     first method for display
    // for(auto it : vec)
    // {
    //     cout<<it<<" ";
    // }

    //     second method for display
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }

    //     third method for display
    // for( i=0; i<vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    return 0;
}