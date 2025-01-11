#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = n - 1;

    // Upper half of the diamond
    for (int row = 1; row <= n; row++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space--;
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    space = 0;

    // Lower half of the diamond
    for (int row = n; row >= 1; row--) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space++;
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}