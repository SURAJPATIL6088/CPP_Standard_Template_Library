/*
Vector in C++

here we learn the 

1 -> how to give size and assigning the value 
2 -> how to access the element of which ever position 
  
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n, val;

    cout << "Enter the size" << endl;
    cin >> n;

    vector<int> vec;

    for (i = 0; i < n; i++)
    {
        cin >> val;
        vec.push_back(val);
    }

    // for accessing the 3rd element of that vector

    // [ -> include operator
    // ( -> exclude operator

    vector<int> vec1(vec.begin(), vec.begin() + 2); // it access the first two elements

    // vector<int> vec1(vec.begin(), vec.end() - 2);  another using begin() and end() modifiers 
    
    cout<<"First Element is "<<vec.front()<<endl;  // access the first elements 
    cout<<"last Element is "<<vec.back();   // it access the last elements
    
    cout << "\nElements are : ";

    // it is a vector itself
    for (auto it : vec1) // here we use the auto keyword
    {
        cout << it << " "; // 1 2
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}