#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long cnt = 1;

    for(int i =1; i < n; i++)
    {
        if(s[i] != s[i-1])
        {
            cnt++;
        }
    }
    cout << cnt;



    return 0;
}