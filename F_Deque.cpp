#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int>q;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push_back")
        {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if(s == "push_front")
        {
            int x;
            cin >> x;
            q.push_front(x);
        }
        else if(s == "print")
        {
            int x;
            cin >> x;
            x--;
            cout<<q.at(x)<<endl;
        }
       else if(s == "pop_front")
        {
            
            q.pop_front();
        }
        else if(s == "pop_back")
        {
            
            q.pop_back();
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