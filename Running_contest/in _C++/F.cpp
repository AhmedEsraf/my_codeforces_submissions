#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int shelves_num, brand_num;
        cin >> shelves_num >> brand_num;

        unordered_map<int, int> merged;
        for (int i = 0; i < brand_num; ++i) {
            int b, c;
            cin >> b >> c;
            merged[b] += c;
        }

        vector<int> bottles;
        for (auto& entry : merged) {
            bottles.push_back(entry.second);
        }

        sort(bottles.begin(), bottles.end(), greater<int>());

        int cost = 0;
        if (shelves_num >= bottles.size()) {
            for (int i = 0; i < bottles.size(); ++i) {
                cost += bottles[i];
            }
        } else {
            for (int i = 0; i < shelves_num; ++i) {
                cost += bottles[i];
            }
        }

        cout << cost << endl;
    }

    return 0;
}
