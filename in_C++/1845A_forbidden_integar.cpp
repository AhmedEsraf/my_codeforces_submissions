#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> arr;
        int temp;
        if (k == 1 and x == 1)
        {
            cout << "NO" << endl;
        }
        else if (n == 1 and x != 1)
        {
            cout << "NO" << endl;
        }
        else if (k > 1 and x != 1)
        {
            for (int i = 0; i < n; i++)
            {
                arr.push_back(1);
            }
        }
        else if (k > 1 and x == 1 and n > 1)
        {
            if (n % 2 == 0)
            {
                for (int i = 0; i < n / 2; i++)
                {
                    arr.push_back(2);
                }
            }
            else if (n % 2 == 1)
            {
                if (k >= 3)
                {
                    int r = n - 3;
                    arr.push_back(3);
                    for (int i = 0; i < r / 2; i++)
                    {
                        arr.push_back(2);
                    }
                }
                else if (k < 3)
                {
                    cout << "NO" << endl;
                }
            }
        }
        if (arr.size() > 0) {
            cout << "YES" << endl;
            cout << arr.size() << endl;
            for (auto x:arr){
                cout << x << " ";
            }
            cout << endl;;
        }
    }
    return 0;
}
