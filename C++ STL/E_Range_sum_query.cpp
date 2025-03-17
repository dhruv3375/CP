#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q;
    cin >> n >> q;
    vector<int>arr(n+1);

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<long long>pref(n+1);
    for(int i = 1; i <= n; i++)
    {
        pref[i] = arr[i] + pref[i-1];
    }

    while(q--)
    {
        int l , r;
        cin >> l >>r;
        long long sum = pref[r] - pref[l-1];
        cout << sum <<endl;
    }
    return 0;
}