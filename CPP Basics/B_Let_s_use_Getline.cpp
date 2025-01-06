#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin , str);

    int pos = str.find("\\"); // first occurance of "\"
    cout << str.substr(0 , pos);     // substr(starting pos , length)

    return 0;
}