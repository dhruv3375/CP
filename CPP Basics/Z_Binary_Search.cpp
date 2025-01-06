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
    //bool flag = false;
    while(q--)
    {
        int a ;
        cin >> a;
        int low = 0;
        int high = n-1;
        bool flag = false;
        
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(arr[mid] < a)
            {
                
                low = mid + 1;
            }
            else if(arr[mid] > a)
            {
                high = mid - 1;
            }
            else{
                flag = true;
                break;
            }
        }
        if(flag == true) cout <<"found"<<"\n";
        else{
            cout << "not found"<<"\n";
        }


        
    }
    return 0;
}