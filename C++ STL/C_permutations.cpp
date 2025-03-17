#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , q;
    cin >> n >> q;

    string name;
    cin >> name;

    while(q--)
    {
        string s;
        cin >> s;
        

        if(s == "next_permutation")
        {
            int k;
            cin >> k;
            for(int i =0; i < k; i++)
            {
                next_permutation(name.begin() , name.end());
            }
            cout<<name<<endl;
        }
        else{
            int k;
            cin >> k;
            for(int i =0; i < k; i++)
            {
                prev_permutation(name.begin() , name.end());
            }
            cout<<name<<endl;
        }

        
    }

    return 0;
}