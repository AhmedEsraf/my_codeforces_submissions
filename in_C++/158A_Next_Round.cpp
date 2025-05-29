#include <iostream>
using namespace std;
int main()
{
    int participants, target;
    cin >> participants >> target;

    int scores[participants];
    int winners = 0;

    for (int i = 0; i < participants; i++)
    {
        cin >> scores[i];
    }
    for (int j = 0; j < participants; j++)
    {
        if (scores[j] > 0 and scores[j] >= scores[target-1])
        {
            winners++;
        }
        
    }

    cout << winners << endl;

}