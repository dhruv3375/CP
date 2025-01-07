#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    string a;
    cin >> a;

    string ans = "";
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if(q == 1)
    {

        for(int i =0; i < a.size(); i++)
        {
            char ch = a[i];
            for(int j = 0; j < Original.size(); j++)
            {
                if(Original[j] == ch)
                {
                    cout <<Key[j];
                    break;
                }
            }
        }
    }
    else{
        for(int i =0; i < a.size(); i++)
        {
            char ch = a[i];
            for(int j = 0; j < Key.size(); j++)
            {
                if(Key[j] == ch)
                {
                    cout <<Original[j];
                    break;
                }
            }
        }
    }
    return 0;
}