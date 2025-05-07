#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string arr;
        cin >> arr;

        while (true)
        {
            bool pair = false;
            for (int i = (arr.size()-1); i >=0; i--)
            {
                if (arr[i] == arr[i - 1])
                {
                    arr.erase(1,i);
                    pair = true;
                    if (arr.size() > 1) {
                        arr[0] = arr[1];
                    }
                    break;
                }
            }
            if (pair == false)
            {
                break;
            }
        }

        cout << arr.size() << endl;
    }
    return 0;
}