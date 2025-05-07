#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solve_test_case() {
    int n, k;
    cin >> n >> k;
    
    vector<int> apples(n);
    for (int i = 0; i < n; i++) {
        cin >> apples[i];
    }
    
    // First, analyze the examples to understand the correct strategy
    
    // Example 1: [2,1,2] with k=1
    // max=2, min=1, diff=1=k
    // Tom takes from first box: [1,1,2]
    // Jerry takes from third box: [1,1,1]
    // Game continues with all boxes having the same value
    // Eventually Tom wins because of parity (5 total apples)
    
    // Example 2: [1,1,3] with k=1
    // max=3, min=1, diff=2>k
    // But Tom still wins - why?
    // Tom takes from third box: [1,1,2]
    // Now max=2, min=1, diff=1=k
    // Jerry takes from any box, e.g., [1,0,2]
    // This creates max=2, min=0, diff=2>k, so Jerry loses
    
    // Example 3: [1,4] with k=1
    // max=4, min=1, diff=3>k
    // Tom takes from second box: [1,3]
    // max=3, min=1, diff=2>k
    // So Tom loses, Jerry wins
    
    // From analysis, we see:
    // 1. If initial diff > k, first player must make it ≤ k
    // 2. If that's impossible, first player loses
    
    int max_val = *max_element(apples.begin(), apples.end());
    int min_val = *min_element(apples.begin(), apples.end());
    int diff = max_val - min_val;
    
    // If initial difference > k
    if (diff > k) {
        // Check if Tom can make a move that brings diff ≤ k
        bool can_fix = false;
        
        // Try taking from a max box
        if (max_val > 1) {
            int new_max = max_val - 1;
            // Find the new max if we decrement one max box
            if (count(apples.begin(), apples.end(), max_val) > 1) {
                // If multiple max boxes, new_max remains the same
                new_max = max_val;
            } else {
                // Find the second highest value
                for (int a : apples) {
                    if (a < max_val && a > new_max) {
                        new_max = a;
                    }
                }
            }
            
            // Check if this move would fix the game
            if (new_max - min_val <= k) {
                can_fix = true;
            }
        }
        
        return can_fix ? "Tom" : "Jerry";
    }
    
    // If initial diff ≤ k, we need to check if a player can force the other
    // to make a move that creates diff > k
    
    // Key observation: When diff = k, taking from a min box is dangerous
    // as it makes the new min higher, potentially making diff > k
    
    if (diff == k) {
        // Count how many apples can be taken without changing the min
        long long safe_apples = 0;
        
        // Count non-min apples
        for (int a : apples) {
            if (a > min_val) {
                safe_apples += a;
            }
        }
        
        // If min_val > 1, we can safely take min_val-1 apples from each min box
        if (min_val > 1) {
            for (int a : apples) {
                if (a == min_val) {
                    safe_apples += (a - 1);
                }
            }
        }
        
        // If safe_apples is odd, Tom can force Jerry to make a dangerous move
        // If safe_apples is even, Jerry can force Tom to make a dangerous move
        return (safe_apples % 2 == 1) ? "Tom" : "Jerry";
    }
    
    // If diff < k, the game is about taking the last apple
    long long total_apples = 0;
    for (int a : apples) {
        total_apples += a;
    }
    
    return (total_apples % 2 == 1) ? "Tom" : "Jerry";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve_test_case() << endl;
    }
    
    return 0;
}