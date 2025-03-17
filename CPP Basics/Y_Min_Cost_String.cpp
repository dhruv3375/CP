#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.length();
    vector<int>a(26);
    for(int i =0; i < 26; i++)
    {
        cin >> a[i];
    }

    int c = -1;
    vector<int>lt(n);
    vector<int>rt(n);
    for(int i =0; i < n; i++)
    {
        if(s[i] != '?')
        {
            c = a[s[i] - 97];
        }
        else{
            lt[i] = c;
        }
    }

    for(int i =n-1; i >= 0; i--)
    {
        if(s[i] != '?')
        {
            c = a[s[i] - 97];
        }
        else{
            rt[i] = c;
        }
    }

    for(int i =0; i < n; i++)
    {
        if(s[i] == '?')
        {
            int l = lt[i];
            int r = rt[i];
            if(l == -1)r = l;
            if(r == -1)l = r;
            if(l == -1 && r == -1){
                l = 1;
                r = 1e5;
            }
            if(l > r) swap(l , r);
            for(int j = 0; j < 26; j++)
            {
                if(a[j] >= l && a[j] <= r)
                {
                    s[i] = (97 + j);
                    break;
                }
            }
        }
    }
    int total = 0;
    for(int i =1; i < n; i++)
    {
        total += abs(a[s[i] - 97] - a[s[i-1] - 97]);
    }

    cout << total<<endl;
    cout << s<<endl;


    return 0;
}