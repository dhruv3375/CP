#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    int q;
    cin >> n >> q;

    string name;
    cin >> name;
    while(q--)
    {
        string s;
        cin >> s;
        if(s == "substr")
        {
            int l , r;
            cin >> l >> r;
            if(l > r) swap(l , r);
            l--;
            r--;
            cout << name.substr(l , r - l + 1)<<endl;;
        }
        else if(s == "sort")
        {
            int l , r;
            cin >> l >> r;
            if(l > r) swap(l , r);
            l--;
            r--;
            sort(name.begin() + l , name.begin() + r + 1);
        }
        else if(s == "pop_back")
        {
            name.pop_back();
        }
        else if(s == "back")
        {
            cout << name.back()<<endl;
        }
        else if(s == "reverse")
        {
            int l , r;
            cin >> l >> r;
            if(l > r) swap(l , r);
            l--;
            r--;
            reverse(name.begin() + l , name.begin() + r + 1);

        }
        else if(s == "front")
        {
            cout<<name[0]<<endl;
        }
        else if(s == "push_back")
        {
            char ch;
            cin >> ch;
            name.push_back(ch);
        }
        else if(s == "print"){
            int n;
            cin >> n;
            n--;
            cout<<name[n]<<endl;
        }


    }
    return 0;
}