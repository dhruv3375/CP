#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    int i =0;
    int j = 0;

    string s2 = "hello";
    int n = s1.length();
    int n2 = s2.length();

    while(i < n && j < n2)
    {
        if(s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j == n2) cout <<"YES";
    else{
        cout <<"NO";
    }

    return 0;
}