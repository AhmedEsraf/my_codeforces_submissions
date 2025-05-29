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
        int og[num];
        for (int i = 0; i < num; i++)
        {
            cin >> og[i];
        }
        int hidden[num];
        for (int i = 0; i < num; i++)
        {
            cin >> hidden[i];
        }
        bool all_hidden = true;
        for (int i = 0; i < num; i++)
        {
            if (hidden[i] != -1)
            {
                all_hidden = false;
                break;
            }
        }
        bool not_pos = false;
        int sum = -1;

        int high = *max_element(og, og + num);
        int low = *min_element(og, og + num);

        if (all_hidden == true)
        {
            if (high > low + max)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ((low + max) - high) + 1 << endl;
            }
        }
        else
        {
            for (int i = 0; i < num; i++)
            {
                if (hidden[i] != -1 and sum == -1)
                {
                    sum = hidden[i] + og[i];
                }
                else if (hidden[i] != -1 and sum != (og[i] + hidden[i]))
                {
                    cout << 0 << endl;
                    not_pos = true;
                    goto next_case;
                }
            }
            int count = 0;
            int verify = 0;
            for (int i = 0; i < num; i++)
            {
                if (not_pos != true)
                {

                    if (og[i] > sum)
                    {
                        cout << 0 << endl;
                        not_pos = true;
                        goto next_case;
                    }
                    else if (hidden[i] == -1 and (sum - og[i] > max))
                    {
                        cout << 0 << endl;
                        not_pos = true;
                        goto next_case;
                    }
                    else
                    {
                        verify++;
                    }
                }
            }

            if (not_pos == true)
            {
            }
            else if (verify != num)
            {
                verify = 0;
            }
            else if (verify == num)
            {
                count++;
            }
            cout << count << endl;
        }
    next_case:;
    }
    return 0;
}