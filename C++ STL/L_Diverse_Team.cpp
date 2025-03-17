#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    map<int , int>mpp;
    vector<int>arr(n);
    for(int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i =0; i < n; i++)
    {
        if(mpp.find(arr[i]) == mpp.end())
        {
            mpp[arr[i]] = i + 1;
        }
    }

    if(mpp.size() < k)
    {
        cout <<"NO";
        
    }
    else{
        cout<<"YES"<<endl;
        for(auto x : mpp)
        {
            if(k > 0){

                cout << x.second<<" ";
                k--;
            }
            
        }
    }
    cout<<endl;
    return 0;
}