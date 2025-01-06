#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 , s2;
    cin >> s1 >> s2;
    int n = min(s1.length() , s2.length());
    bool flag = false;
    int i =0;
    while(i < n)
    {
        if(s1[i] == s2[i])
        {
            i++;
            continue;
        }
        else{
            if(s1[i] < s2[i]){
                cout << s1;
            }
            else{
                cout << s2;
            }
            flag = true;
            break;
        }
            
    }
    if(flag == false){
        if(s1.length() < s2.length())
        cout << s1;
        else{
        cout << s2;
    }
    }
    



}