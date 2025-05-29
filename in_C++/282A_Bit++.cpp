#include <iostream>

using namespace std;
int main()
{
    int num;
    cin >> num;

    int initial = 0;

    for (int i = 0; i < num; i++)
    {
        string op;
        cin >> op;
        
        if (op[0] == '+' || op[1] == '+' || op[2] == '+')
        {
            initial += 1;
        }
        else if (op[0] == '-' || op[1] == '-' || op[2] == '-')
        {
            initial -= 1;
        }
    }
    cout << initial << endl;
}