/*
Vector in C++
1. at()
at() function is used reference the element present at the position given as the
parameter to the function.

basic syntax :-

vectorname.at(position)
Parameters:
Position of the element to be fetched.
Returns:
Direct reference to the element at the given position.

2. swap(vector- name)
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1, v2;

    v1.push_back(1); // vector 1
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    v2.push_back(50); // vector 2
    v2.push_back(60);
    v2.push_back(70);
    v2.push_back(80);

    cout << "At() function called " << v1.at(3) << endl; // it return the element which is at 3rd position

    cout << "elements in  vector 1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << "\nElements in vector 2 : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    // using swap function

    cout << endl; // for break

    cout << "\nAfter performing the swap operation v1 And v2 are " << endl;

    v1.swap(v2); //swap operation are done

    cout << "2nd position element : " << v1.at(2) << endl;

    cout << "Elements in vector 1 : ";
    for (auto i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\nElements in vector 2 : ";
    for (auto i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}