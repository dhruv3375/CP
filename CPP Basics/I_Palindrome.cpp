#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int rev = 0;

    int temp = x;
    while(temp)
    {
        int last_digit = temp % 10;
        temp /= 10;
        rev = rev * 10 + last_digit;
    }

    cout << rev <<"\n";

    if(x == rev) cout <<"YES";
    else{
        cout <<"NO";
    }
    return 0;
}