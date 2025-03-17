#include <bits/stdc++.h>
using namespace std;

int  main()
{
    long long n , query;
    cin >> n >> query;
    vector<long long>arr(n + 1);

    for(long long i =1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<long long>diff(n+2);
    while(query--)
    {
        long long l , r;
        cin >>l >>r;
        // l--;
        // r--;

        long long x;
        cin>>x;
        diff[l] += x;
        // if(r +1 < n)
        diff[r + 1] -= x;
    }

    for(long long i =1; i <= n; i++)
    {
        diff[i] += diff[i-1];
    }

    for(long long i =1; i <= n; i++)
    {
        arr[i] += diff[i];
    }

    for(long long i =1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}