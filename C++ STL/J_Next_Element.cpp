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

    int q;
    cin >> q;

    while(q--)
    {
        int i;
        cin >> i;

        bool flag = false;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                cout << j <<endl;
                flag = true;
                break;
            }
        }
        if(flag == false) cout <<-1<<endl;
    }
    return 0;
}