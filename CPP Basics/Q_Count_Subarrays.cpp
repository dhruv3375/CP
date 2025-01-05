#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n ;
        cin >> n;

        vector<int>arr(n);
        for(int i =0; i < n; i++)
        {
            cin >> arr[i];

        }
        int prev;
        int total = 0;
        for(int i =0; i < n; i++)
        {
            // int cnt = 0;
            for(int j = i; j < n; j++)
            {
                
                if(j != i && arr[j] <= prev)
                {
                    break;
                }
                prev = arr[j];
                total++;
            }
        }
        cout << total <<"\n";
    }
    return 0;
}