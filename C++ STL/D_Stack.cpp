#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int>st;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
       else if(s == "pop")
        {
            
            st.pop();
        }
        else{
            cout<<st.top()<<endl;
        }
    }
    return 0;
}