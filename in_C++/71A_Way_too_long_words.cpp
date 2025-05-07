#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        string word;
        cin >> word;
        int size = word.length();
        if (size > 10) {
            cout << word[0] << (size-2) << word[size-1] << endl;
        }
        else {
            cout << word << endl;
        }
    }
}