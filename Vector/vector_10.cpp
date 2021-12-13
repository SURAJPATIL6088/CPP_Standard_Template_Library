#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int size, i;
    string n;
    cout << "Enter the Size of the vector : ";
    cin >> size;

    vector<string> vec;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the String : ";
        cin >> n;

        vec.emplace_back(n);
    }
    cout<<"Initial Number is ";
    for (auto str : vec)
    {
        cout << str << " ";
    }

    reverse(vec.begin(), vec.end());
    cout<<"\nReverse Number is ";
    for(auto str: vec)
    {
        cout<<str<<" ";
    }
    return 0;
}