#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, max;
        cin >> num >> max;

        int arr[num];
        arr[num - 1] = max;
        int count;
        if (num == 1 and max == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if(max >= num and num != 1) {
                arr[num-1] = num-1;
            }
            if (max == 0)
            {
                count = 1;
            }
            else
            {
                count = 0;
            }
            for (int i = 0; i < num - 1; i++)
            {
                if (count == max)
                {
                    count++;
                }
                cout << count << " ";
                count++;
            }
            cout << arr[num - 1] << endl;
        }
    }
    return 0;
}