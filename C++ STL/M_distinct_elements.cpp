#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q;
    cin >> n >> q;
    set<int>st;
    vector<int>arr;

    for(int i =0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    for(int x : st)
    {
        arr.push_back(x);
    }

    for(int i =0; i < q; i++)
    {
        int x ;
        cin >> x;
        int pos = lower_bound(arr.begin() , arr.end() , x) - arr.begin();
        cout<<pos<<" ";
        int pos1 = upper_bound(arr.begin() , arr.end() , x) - arr.begin();
        cout<<arr.size() - pos1<<endl;
    }
    return 0;
}