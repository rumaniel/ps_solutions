#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string input = "";

    cin >> input;

    const char *charArray = input.c_str();
    int charSize = input.length();
    bool isPair = true;

    for (int i = 0; i < charSize / 2; i++)
    {
        if (charArray[i] != charArray[charSize - i - 1])
        {
            isPair = false;
            break;
        }
    }

    cout << isPair ? 1 : 0;
}