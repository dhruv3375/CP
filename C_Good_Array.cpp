#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int,int>>v;
    set<int>st;

    long long total_sum = 0;
    for(int i =0; i < n; i++)
    {
        v.push_back({arr[i] , i});
        total_sum += arr[i];
        st.insert(arr[i]);


    }

    vector<int>ans;
    for(int i =0; i < n; i++)
    {
        int val = v[i].first;
        int idx = v[i].second;

        st.erase(st.find(val));

        int lst = *(--st.end());

        if(total_sum - val - lst == lst)
        {
            ans.push_back(idx + 1);
        }
        st.insert(val);
    }
    cout << ans.size()<<endl;
    for(int x : ans)
    {
        cout << x <<" ";
    }
    cout << endl;
    return 0;
}