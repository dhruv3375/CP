#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1 , r1 , l2 , r2;

    cin >> l1 >> r1 >> l2 >> r2;

    int i , j;
    i = max(l1 , l2);
    j = min(r1 , r2);

    if(i > j)
    {
        cout << -1;

    }
    else {
        cout << i <<" "<<j<<endl;
    }
    return 0;
}