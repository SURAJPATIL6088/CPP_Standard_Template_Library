#include<bits/stdc++.h>
using namespace std;

// erase(iterator);

// for deleting the entire set

// st.erase(st.begin(),st.end());

int main()
{
    set<int>st;

    int n;
    cin>>n;

    for( int i =0; i<n; i++)
    {
        int c;
        cin>>c;
        st.insert(c);
    }

    int f;
    cin>>f;

    //cout<<st.erase(f)<<endl;    // it will erase perticular element

    auto itt = st.find(f);
    //st.erase(st.begin());

    for(auto it : st)
    {
        cout<<it<<" ";
    }

    return 0;
}