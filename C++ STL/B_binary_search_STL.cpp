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
    sort(arr.begin() , arr.end());

    while(q--)
    {
        string s;
        cin >> s;
        if(s == "lower_bound")
        {
            int x;
            cin >> x;
            auto it = lower_bound(arr.begin() , arr.end() , x);
            if(it == arr.end())
            {
                cout<<"-1"<<endl;
            }
            else{
                cout<<*it<<endl;
            }
        }

        else if(s == "upper_bound")
        {
            int x;
            cin >> x;
            auto it = upper_bound(arr.begin() , arr.end() , x);
            if(it == arr.end())
            {
                cout<<"-1"<<endl;
            }
            else{
                cout<<*it<<endl;
            }
        }
        else{
            int x ;
            cin >> x;
            auto it = binary_search(arr.begin() , arr.end() , x);
            if(!it)
            {
                cout<<"not found"<<endl;
            }
            else{
                cout<<"found"<<endl;
            }

        }
    }
    return 0;
}