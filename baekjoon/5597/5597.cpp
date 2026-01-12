#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    bool homeworks[30] = {
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
        false,
    };

    int input;
    for (int i = 0; i < 28; i++)
    {
        cin >> input;
        homeworks[input - 1] = true;
    }

    for (int i = 0; i < 30; i++)
    {
        if (!homeworks[i])
        {
            cout << i + 1;
            cout << "\n";
        }
    }
}
