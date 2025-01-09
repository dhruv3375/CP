#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q ;
    cin >> n >> q;
    vector<int>arr(n + 1, 0);
    while(q--)
    {
        int x , ip;
        cin >> x >>ip;
        if(x == 1)
        {
            arr[ip]++;
        }
        else{
            cout << arr[ip]<<"\n";
        }

    }

    return 0;
}