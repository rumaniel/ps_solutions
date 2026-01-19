#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int input = 0;

    cin >> input;

    int index = 0;
    int currentValue = 1;

    while (input > 0)
    {
        index++;

        input -= currentValue++;

        if (input < currentValue)
        {
            currentValue = 1;
        }
    }

    cout << index;
}
