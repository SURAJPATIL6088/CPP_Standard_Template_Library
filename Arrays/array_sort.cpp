#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of the Array : " << endl;
    cin >> n;

    // define the array
    int arr[n];

    cout<<"Enter the Values in Array!!"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Normal Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nSorted Array : ";

    // in sort fun pass the starting and ending positions
    sort(arr, arr + n);

    //sort(arr, arr + 4);  // it will sort upto 4 positions

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}