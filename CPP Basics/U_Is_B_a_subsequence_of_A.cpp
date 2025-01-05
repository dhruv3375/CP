#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,  m;
    cin >> n >> m;

    vector<int>arr1(n);
    vector<int>arr2(m);

    for(int i =0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for(int i =0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else{
            i++;
        }

    }
    if(j == m) cout <<"YES";
    else{
        cout <<"NO";
    }

    return 0;
}