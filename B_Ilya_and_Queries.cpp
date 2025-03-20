#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    n = s.length();
    

    vector<int>arr(n + 1 , 0);
    int cnt = 0;

    for(int i = 1; i< n; i++)
    {
        if(s[i] == s[i-1])
        {
           
            arr[i + 1] = 1;
        }
        else{
            arr[i+1] = 0;
        }
    }
    vector<int>pref(n + 1 , 0);
    for(int i = 1; i<= n; i++)
    {
        pref[i] = pref[i-1] + arr[i];        
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l , r;
        cin >> l >> r;
        

        cout<<pref[r] - pref[l]<<endl;

       

    }
    return 0;
}