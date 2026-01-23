#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int inputCount;

    cin >> inputCount;

    bool resultArray[20];

    for (int i = 0; i < inputCount; i++)
    {
        string command;
        int value;
        cin >> command;

        if (command.compare("add") == 0)
        {
            cin >> value;
            resultArray[value - 1] = true;
        }
        else if (command.compare("remove") == 0)
        {
            cin >> value;
            resultArray[value - 1] = false;
        }
        else if (command.compare("check") == 0)
        {
            cin >> value;
            cout << resultArray[value - 1] ? "1" : "0";
            cout << "\n";
        }
        else if (command.compare("toggle") == 0)
        {
            cin >> value;
            resultArray[value - 1] = !resultArray[value - 1];
        }
        else if (command.compare("all") == 0)
        {
            std::fill(resultArray, resultArray + 20, true);
        }
        else if (command.compare("empty") == 0)
        {
            std::fill(resultArray, resultArray + 20, false);
        }
    }
}
