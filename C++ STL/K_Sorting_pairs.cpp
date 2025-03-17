#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string , int>&p1 , pair<string , int>&p2)
{
    if(p1.second > p2.second)
    {
        return true;
    }
    else if(p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    else{
        return false;
    }
}

int main()
{
    int n ;
    cin >> n;
    vector<pair<string,int>>arr;
    while(n--)
    {
        string s;
        int x;
        cin >> s >> x;
        arr.push_back({s,x});
    }
    sort(arr.begin() , arr.end() ,cmp);
    for(pair<string , int> x : arr)
    {
        cout << x.first <<" "<<x.second;
        cout<<endl;
    }
    
    return 0;
}