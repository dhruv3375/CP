#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long>v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i =0; i < q; i++)
    {
        int l , r;
        cin >> l >> r;
        long long sum = 0;
        for(int i =l - 1; i < r; i++)
        {
            sum += v[i];

        }
        cout << sum <<"\n";

    }

    return 0;
}