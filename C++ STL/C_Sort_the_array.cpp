#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long>arr(n);
    for(long long i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin() , arr.end());
    for(auto x : arr)
    {
        cout << x <<" ";
    }
    cout <<"\n";
    return 0;
}