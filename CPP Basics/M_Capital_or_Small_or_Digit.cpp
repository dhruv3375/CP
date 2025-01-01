#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>> ch;

    if(ch >='a' && ch <='z')
    {
        cout <<"ALPHA"<<"\n";
        cout << "IS SMALL";
    }
    else if(ch >='A' && ch <='Z')
    {
        
        cout <<"ALPHA"<<"\n";
        cout << "IS CAPITAL";
    }
    else{
        cout <<"IS DIGIT";
     }

    return 0;
}