#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k ;
    cin >> k;

    vector<int>arr(n);
    for(int i =0; i< n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin() , arr.end());

    int ans = 0;
    if(k == 0)
    {
        ans = arr[0] - 1;

    }
    else {
        ans = arr[k-1];
    }

    int cnt = 0;

    for(int i =0; i < n; i++)
    {
        if(arr[i] <= ans)
        {
            cnt++;
        }
    }

    if(cnt != k || ans < 1 || ans > (long long)1e9)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}