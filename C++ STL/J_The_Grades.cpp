#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string , long long>&p1 , pair<string , long long>&p2)
    {
        if(p1.second > p2.second)
        {
            return true;
        }
        else if(p2.second == p1.second)
        {
            return p1.first < p2.first;
        }
        else{
            return false;
        }
    };

int main()
{
    int n;
    cin >> n;

    map<string , vector<long long>>m;
    vector<pair<string , long long>>v1;

    


    while(n--)
    {
        string name;
        cin >> name;

        int a , b , c , d , total;

        cin >> a >> b >> c >> d;

        total = a + b + c + d;

        v1.push_back({name , total});

        vector<long long>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        m[name] = v;

    }
    sort(v1.begin() , v1.end() , cmp);

    for(auto x : v1)
    {
        cout<<x.first <<" "<<x.second<<" ";
        vector<long long>v = m[x.first];
        for(long long x : v)
        {
            cout <<x<<" ";
        }
        cout << endl;
    }

    
    return 0;
}