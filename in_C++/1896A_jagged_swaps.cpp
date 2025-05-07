#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        int temp;

        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = 2; j < num - i; j++)
            {
                if (arr[j - 1] > arr[j - 2] and arr[j - 1] > arr[j])
                {
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        if (is_sorted(arr, arr + num))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}