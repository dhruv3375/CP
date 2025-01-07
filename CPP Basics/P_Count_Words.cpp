#include <bits/stdc++.h>
using namespace std;

bool check(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z'))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string s;
    getline(cin , s);
    long long cnt = 0;
    bool flag = false;
    for(int i =0; i < s.size(); i++)
    {
        if(check(s[i]))
        {
            if(!flag)
            {
                cnt++;
                flag = true;
            }
        }
        else{
            flag = false;
        }
    }
    cout << cnt;
    return 0;
}