
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int gas, target;
        cin >> gas >> target;

        int gas_station[gas];
        for (int i = 0; i < gas; i++)
        {
            cin >> gas_station[i];
        }
        int dis = gas_station[0];
        for (int i = 1; i < gas; i++)
        {
            int temp = gas_station[i] - gas_station[i - 1];
            if (temp > dis)
            {
                dis = temp;
            }
        }

        int lol = (2 * (target - gas_station[gas - 1]));

        if (dis < lol)
        {
            dis = lol;
        }
        cout << dis << endl;
    }
    return 0;
}