#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>>merge;

    vector<vector<int>>ans;

    while(n--)
    {
        int a , b;
        cin>> a >> b;
        if(a > b) swap(a , b);
        merge.push_back({a , b});
    }

    sort(merge.begin() , merge.end());

    int cs = merge[0][0];
    int ce = merge[0][1];

    for(int i = 1; i < merge.size(); i++)
    {
        int ns = merge[i][0];
        int ne = merge[i][1]; 

        // condition for merge
        // non overlap --> if(ns > ce)

        if(ns > ce)
        {
            ans.push_back({cs , ce});
            cs = ns;
            ce = ne;
        }
        else if(ce < ne)
        {
            ce = ne;
        }


    }
    ans.push_back({cs,ce});

    for(int i =0; i < ans.size(); i++)
    {
        auto x = ans[i];
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}