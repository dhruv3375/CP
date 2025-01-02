#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    int cnt  = 0;
    for(int i = 0; i <= a; i++)
    {
        for(int j = 0; j <=a; j++)
        {
            long long z = b - (i + j);
            if(z >= 0 && z <=a){

                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}