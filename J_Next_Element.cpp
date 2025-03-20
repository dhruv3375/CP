#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  // Fast I/O
    cin.tie(nullptr);             // Unbinds cin from cout

    long long n;
    cin >> n;
    vector<long long> arr(n), nge(n, -1);
    stack<long long> st;

    for (long long &x : arr) cin >> x;

    // Find next greater elements using a stack
    for (long long i = n - 1; i >= 0; --i) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) nge[i] = st.top(); // Store index of next greater element
        st.push(i);
    }

    long long q;
    cin >> q;

    // Process queries
    while (q--) {
        long long i;
        cin >> i;
        cout << (nge[i - 1] == -1 ? -1 : nge[i - 1] + 1) << '\n';  // '\n' is faster than endl
    }

    return 0;
}
