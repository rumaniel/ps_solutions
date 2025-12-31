#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << "\n";
    }
    cout << endl;

    int A = 0, B = 0, C = 0;
    int iResult = 0;
    int cResult = 0;
    char str[3] = "";

    cin >> A >> B >> C;

    iResult = (A + B) - C;

    str[0] = (char)A;
    str[1] = (char)B;
    str[2] = (char)C;

    cResult = (int)(str[0]) * 10;
    cResult += (int)(str[1]);
    cResult -= (int)(str[2]);

    cout << iResult << '\n';
    cout << cResult;
}