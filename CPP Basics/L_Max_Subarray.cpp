#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int n; // Size of the array
        cin >> n;
        vector<long long> l(n); // Initialize vector of size n
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }

        // Output all maximums of subarrays
        for (int i = 0; i < n; i++)
        {
            long long maxi = l[i];
            for (int j = i; j < n; j++)
            {
                maxi = max(maxi, l[j]); // Update the maximum for the current subarray
                cout << maxi << " ";
            }
        }
        cout << "\n"; // Newline after each test case
    }
    return 0;
}
