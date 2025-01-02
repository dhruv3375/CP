#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr;
    while(n--)
    {
        int t ;
        cin >> t;
        arr.push_back(t);
    }

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i +1; j < arr.size(); j++)
        {
            if(arr[j] < arr[i])
            {
                swap(arr[i] , arr[j]);
            }
        }
    }

    for(int i =0; i < arr.size();i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}