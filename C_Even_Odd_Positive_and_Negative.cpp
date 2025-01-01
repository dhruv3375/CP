#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int Even = 0, Odd = 0, Pos = 0, Neg = 0;

    while(n--)
    {
        int a;
        cin >> a;
        if(a == 0)
        {
            Even++;
        }
        else if(a > 0 && a % 2 == 0)
        {
            Even++;
            Pos++;
        }
        else if(a > 0 && a % 2 != 0)
        {
            Odd++;
            Pos++;
        }
        else if(a < 0 && a % 2 == 0)
        {
            Neg++;
            Even++;
            
        }
        else {
            Neg++;
            Odd++;
        }
    }

    cout <<"Even: "<<Even<<"\n";
    cout <<"Odd: "<<Odd<<"\n";
    cout <<"Positive: "<<Pos<<"\n";
    cout <<"Negative: "<<Neg;


    return 0;
}