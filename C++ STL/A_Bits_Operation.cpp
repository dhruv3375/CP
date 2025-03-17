#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q , n;
    cin >> q >> n;

    while(q--)
    {
        int x ;
        cin >> x;
        if(x == 1)
        {
            int k;
            cin >> k;
            n = n | k;
            cout << n <<"\n";
        }
        else if(x == 2)
        {
            int k;
            cin >> k;
            n = n & k;
            cout << n <<"\n";
        }
        else if(x == 3)
        {
            int k;
            cin >> k;
            n = n xor k;
            cout << n <<"\n";
        }
        else{
            n = ~n;
            cout<<n <<endl;
        }
    }

    return 0;
}