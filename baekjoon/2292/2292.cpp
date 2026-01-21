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

    while (true)
    {
        int sum = 6 * index++;
        currentValue += sum;

        if (input <= currentValue)
            break;
    }

    cout << index;
}
