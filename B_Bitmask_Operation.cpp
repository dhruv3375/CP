#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q , n;
    cin >> q>>n;
    while(q--)
    {
        int x ;
        cin >> x;

        if(x == 1)
        {
            int t;
            cin >> t;
            cout << ((n >> t) & 1)<<endl;
            continue;

        }
        else if(x == 2)
        {

            int t;
            cin >> t;
            n |= (1 << t);
        }
        else if(x == 3)
        {
            int t;
            cin >> t;
            n &= ~(1 << t);

        }
        else{
            int t;
            cin >> t;
            n ^= (1 << t);
        }
        cout << n <<endl;

    }
    return 0;
}