#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q;
    cin >> n >> q;

    vector<int>arr(n);
    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    while(q--)
    {
        string s;
        cin >> s;
        if(s == "sort")
        {
            int l , r;
            cin >> l >>r;
            if(l > r) swap(l , r);
            l--;
            r--;
            sort(arr.begin() + l , arr.begin() + r + 1);
        }
        else if(s == "pop_back")
        {
            arr.pop_back();
        }
        else if(s == "back")
        {
            cout<<arr.back()<<endl;
        }
        else if(s == "reverse")
        {
            int l , r;
            cin >> l >> r;
            if(l > r) swap(l , r);
            l--;
            r--;
            reverse(arr.begin() + l , arr.begin() + r + 1);

        }
        else if(s == "front")
        {
            cout<<arr[0]<<endl;
        }
        else if(s == "push_back")
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        else{
            int x;
            cin >> x;
            cout<<arr[x-1]<<endl;
        }
    }
    return 0;
}