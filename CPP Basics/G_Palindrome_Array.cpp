#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;

    vector<long long>v(n);
    for(int i =0; i < n; i++)
    {
        cin >> v[i];
    }

    // vector<long long>ans;
    // ans = v;
    // reverse(ans.begin() , ans.end());
    // if(ans == v) cout <<"YES";
    // else{
    //     cout<<"NO";
    // }

    int start = 0;
    int end = n-1;
    while(start <= end)
    {
        if(v[start] == v[end])
        {
            start++;
            end--;
        }
        else{
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";

    return 0;
}