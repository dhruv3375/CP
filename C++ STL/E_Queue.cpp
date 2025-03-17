#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int>q;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
       else if(s == "pop")
        {
            
            q.pop();
        }
        else if(s == "front"){
            cout<<q.front()<<endl;
        }
        else{
            cout<<q.back()<<endl;
        }
    }
    return 0;
}