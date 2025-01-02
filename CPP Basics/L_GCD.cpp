
/* Method 1 : Using Gcd Stl Function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;

    int ans ;
    ans = __gcd(a,b);
    cout <<ans;
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    return gcd(b % a , a);
}

int main()
{
    int a , b;
    cin >> a >> b;
    if(a > b)
    {
        swap(a , b);
    }
    int ans = gcd(a,b);
    cout << ans;
    return 0;
}
