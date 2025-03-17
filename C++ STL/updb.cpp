#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n , query;
    cin >> n >> query;
    vector<long long>arr(n);

    for(long long i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(query--)
    {
        long long l , r , val;
        cin >> l >> r >> val;
        for(long long i = l - 1; i < r ; i++)
        {
            arr[i] += val;
        }
    }

    for(long long i =0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}
