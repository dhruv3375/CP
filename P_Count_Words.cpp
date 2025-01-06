#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin , s);

    int i =0;
    int n = s.length();
    int count = 0;
    while(i < n)
    {
        if(s[i] == ' ')
        {
            if((i + 1) < n && ((s[i+1] >= 'a' && s[i+1] <= 'z')) || (s[i+1] >= 'A' && s[i+1] <= 'Z'))
            {
                count++;
                
            }
        }
        i++;
    }
    cout << count + 1;
    return 0;
}