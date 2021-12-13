/*
Vector in C++

her we discuss the 2d vector 

syntax :- 

        vector<vector <int>> vec;

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i, j, val, val_1, val_2;
    cout << "Enter the size " << endl;
    cin >> n;

    vector<vector<int>> vec; // defining the 2d vector

    vector<int> vec1;
    for (i = 0; i < n; i++)
    {
        cin >> val;
        vec1.emplace_back(val);  // it same as push_bak()   || it take less memory 
    }
    vec.emplace_back(vec1);

    for (i = 0; i < n; i++)
    {
        cout << vec1[i] << " ";
    }

    cout << endl;

    vector<int> vec2;
    for (i = 0; i < n; i++)
    {
        cin >> val_1;
        vec2.emplace_back(val_1);
    }
    vec.emplace_back(val_1);

    for (i = 0; i < n; i++)
    {
        cout << vec2[i] << " ";
    }

    cout << endl;
    // access 2d vector element via traditional way
    for (i = 0; i < vec.size(); i++)
    {
        for (j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
    }

    // access by the competative way
    for (auto vctr : vec)
    {
        for (auto it : vctr)
        {
            cout << it << " ";
        }
    }
    return 0;
}