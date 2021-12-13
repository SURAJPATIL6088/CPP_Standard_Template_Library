#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Size of the Array : " << endl;
    cin >> n;

    // define the array
    int arr[n];

    cout << "Enter the Values in Array!!" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max, min;

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "maximum element is " << max<<endl;
    cout << "minimum element is " << min<<endl;
    return 0;
}