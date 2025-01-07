#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int main_cnt = 1;
    for(int i =0; i < n; i++)
    {
        for(int j =1; j < 4; j++)
        {
            cout <<main_cnt++<<" ";
        }
        cout <<"PUM"<<"\n";
        main_cnt++;
    }

    return 0;
}