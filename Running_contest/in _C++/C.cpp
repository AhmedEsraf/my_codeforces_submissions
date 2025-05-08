#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;

        float hi_dps = 0;
        vector<map<float, pair<int, int>>> tools;

        for (int i = 0; i < n; i++) {
            int time, dmg;
            cin >> time >> dmg;

            float dps = (float)dmg / time; // ensure float division
            hi_dps = max(hi_dps, dps);

            map<float, pair<int, int>> tool;
            tool[dps] = {time, dmg};
            tools.push_back(tool);
        }

        cout << "Highest DPS: " << hi_dps << endl;
        
    }

    return 0;
}

