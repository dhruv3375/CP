#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int digit;
    // cin >> digit;

    string s;
    cin >> s;
     long long sum = 0;
    for(int i =0; i < s.size(); i++)
    {
        sum += s[i] - 48;
    }
    cout << sum;



   

    // while(digit != 0)
    // {
    //     int rem = digit % 10;
    //     digit /= 10;
    //     sum += rem;
    // }

   
    return 0;
}