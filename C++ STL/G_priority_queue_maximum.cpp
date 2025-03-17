#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int>pq;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int x;
            cin >> x;
            pq.push(x);
        }
       else if(s == "pop")
        {
            
            pq.pop();
        }
        else{
            cout<<pq.top()<<endl;
        }
    }
    return 0;
}