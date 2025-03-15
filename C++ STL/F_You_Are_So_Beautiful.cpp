#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // `left` should store the leftmost occurrence and `right` the rightmost occurrence
    map<int, int> left, right;
    for (int i = 0; i < n; i++) {
        if (left.find(v[i]) == left.end()) { // If not already present in left map
            left[v[i]] = i;
        }
        right[v[i]] = i; // Update rightmost occurrence
    }

    vector<int> poss(n);
    for (int i = 0; i < n; i++) {
        if (right[v[i]] == i) {
            poss[i] = 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        poss[i] += poss[i + 1];
    }

    // Optional debug output to print the `poss` array
    // for (int i = 0; i < n; i++) cout << poss[i] << " ";
    // cout << endl;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (left[v[i]] == i) {
            ans += poss[i];
        }
    }

    cout << ans << endl;
}

int main()
{
    solve();

    
}