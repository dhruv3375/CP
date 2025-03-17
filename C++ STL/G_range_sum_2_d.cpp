#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n , m , q;
    cin >> n >> m >> q;
    vector<vector<long long>>arr(n+1 , vector<long long>(m+1 , 0));

    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <=m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<long long>>pref(n+1 , vector<long long>(m+1 , 0));

    for(long long i = 1; i <= n; i++)
    {
        for(long long j = 1; j <=m; j++)
        {
            pref[i][j] = pref[i][j-1] + pref[i-1][j] + arr[i][j] - pref[i-1][j-1];
        }
    }

    // for(long long i = 1; i <= n; i++)
    // {
    //     for(long long j = 1; j <=m; j++)
    //     {
    //         cout << pref[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    while(q--)
    {
        long long a , b , c , d;
        cin >> a >> b >> c >> d;

        long long ans = pref[c][d] - pref[a-1][d] - pref[c][b-1] + pref[a-1][b-1];
        cout<<ans<<endl;

    }



    return 0;
}