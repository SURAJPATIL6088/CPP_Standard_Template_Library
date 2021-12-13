// emplace function is same as insert

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, size;

    cout << "Enter the size of the vector : ";
    cin >> size;

    // declare the vector
    vector<int> myvec;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the push Value "<<i+1<<" : ";
        cin >> n;
        myvec.emplace_back(n);
    }

    // display function
    for (auto it : myvec)
    {
        cout << it << " ";
    }

    // emplace function declare
    cout << "\nStart Inserting Elements " << endl;

    auto it = myvec.emplace(myvec.begin() + 2, 10); // it insert the element at index no.1
    myvec.emplace(it, 20);                          // it insert the element before auto of it
    myvec.emplace(myvec.end(), 30);                 // it insert the element at last position

    for (i = 0; i < myvec.size(); i++) // vec.size() follows new size after adding the elements
    {
        cout << myvec[i] << " ";
    }
    return 0;
}