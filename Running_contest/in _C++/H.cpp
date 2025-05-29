#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate gcd of two numbers
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to check if we can reorder array to be beautiful
bool canMakeBeautiful(vector<long long>& arr) {
    int n = arr.size();

    // Sort array to start from smallest number
    sort(arr.begin(), arr.end());

    vector<bool> used(n, false);  // Track which elements are used
    vector<long long> result;     // This will store our reordered array

    // Start result with the smallest element
    result.push_back(arr[0]);
    used[0] = true;

    long long current_gcd = arr[0];  // GCD of the prefix

    // Build the array one element at a time
    for (int length = 2; length <= n; length++) {
        bool found = false;

        // Try to find an unused element that keeps gcd ≤ prefix length
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                long long new_gcd = gcd(current_gcd, arr[i]);

                // Check condition for good prefix
                if (new_gcd <= length) {
                    // Add this element to result
                    result.push_back(arr[i]);
                    used[i] = true;
                    current_gcd = new_gcd;
                    found = true;
                    break;  // Move on to next prefix length
                }
            }
        }

        // If no suitable element found, array can't be beautiful
        if (!found) return false;
    }

    return true;  // All prefixes are good
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n;  // Size of the array
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (canMakeBeautiful(arr))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
