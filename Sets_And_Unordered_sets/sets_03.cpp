#include <bits/stdc++.h>
using namespace std;

// average time complexity O(n)
// tle come then switch to set
// wrost time complexity is linear in nature O(set size)

int main()
{
    unordered_set<int> st;
    unordered_set<int> st1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        st.insert(a);
    }

    for (int i = 0; i < n; i++)
    {
        int a1;
        cin >> a1;

        st1.insert(a1);
    }

    // size of the sets
    cout<<"Size of the set 1 : "<<st.size()<<endl;
    cout<<"Size of the set 2 : "<<st1.size()<<endl;
    
    // swap operation
    st.swap(st1);       // it swap the st1 to st2
    for (auto it : st)
    {
        cout << it << " ";
    }

    return 0;
}