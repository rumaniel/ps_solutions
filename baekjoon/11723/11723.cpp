#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int inputCount;

    cin >> inputCount;

    int flags = 0;
    string command;
    int value;

    for (int i = 0; i < inputCount; i++)
    {
        cin >> command;

        if (command.compare("add") == 0)
        {
            cin >> value;
            flags |= (1 << value);
        }
        else if (command.compare("remove") == 0)
        {
            cin >> value;
            flags &= ~(1 << value);
        }
        else if (command.compare("check") == 0)
        {
            cin >> value;
            bool isSet = (flags & (1 << value));
            cout << (isSet ? 1 : 0) << "\n";
        }
        else if (command.compare("toggle") == 0)
        {
            cin >> value;
            flags ^= (1 << value);
        }
        else if (command.compare("all") == 0)
        {
            flags = ~0;
        }
        else if (command.compare("empty") == 0)
        {
            flags = 0;
        }
    }
}
