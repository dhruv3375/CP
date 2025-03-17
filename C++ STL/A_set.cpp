#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int>st;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "insert")
        {

            int x;
            cin >> x;
            st.insert(x);
        }
        else if(s == "find")
        {
            int x ;
            cin >> x;
            if(st.find(x) != st.end())
            {
                cout<<"found"<<endl;
            }
            else{
                cout<<"not found"<<endl;
            }

            // if(st.count(x) > 0)
            // {
                
            //     cout<<"found"<<endl;
            // }
            // else{
            //     cout<<"not found"<<endl;
            // }
        }
        else if(s == "lower_bound")
        {
            int x ;
            cin >> x;
            auto ans = st.lower_bound(x);
            if(ans == st.end())
            {
                cout<<-1<<endl;
            }
            else{

                cout<<*ans<<endl;
            }
        }
        else{
            int x ;
            cin >> x;
            auto ans = st.upper_bound(x);
            if(ans == st.end())
            {
                cout<<-1<<endl;
            }
            else{

                cout<<*ans<<endl;
            }
            
        }
    }
    return 0;
}