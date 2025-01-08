#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    vector<int>arr(n);
    set<long long>st;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }

    for(int i = -m; i <=m; i++)
    {
        if(st.count(i) == 0)
        {
            cout << i <<"\n";
            break;
        }
    }
    
    return 0;
}