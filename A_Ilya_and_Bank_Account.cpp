#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl; // If positive, no need to remove anything.
    } else {
        // Convert n to positive to manipulate digits
        string s = to_string(n);

        // Option 1: Remove the last digit
        int option1 = stoi(s.substr(0, s.size() - 1));

        // Option 2: Remove the second last digit
        int option2 = stoi(s.substr(0, s.size() - 2) + s.back());

        // Print the maximum value
        cout << max(option1, option2) << endl;
    }

    return 0;
}
