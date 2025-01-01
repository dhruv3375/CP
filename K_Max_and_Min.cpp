#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b , c;
    cin >> a>>b>>c;

    int mini;
    int maxi;

    mini = min(a , min(b ,c));
    maxi = max(a , max(b ,c));

    cout << mini <<" "<<maxi;



    return 0;
}