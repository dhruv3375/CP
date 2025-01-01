#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char op;
    cin >> a;
    cin >>op;
    cin >> b;

    if(op == '+')
    {
        cout << a+b;
    }
    else if(op == '-')
    {
        cout << a-b;
    }
    else if(op == '*')
    {
        cout << a*b;
    }
    else{
        cout << a/b;
    }
    return 0;
}