#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int aCount, bCount;

    cin >> aCount >> bCount;

    vector<string> aVector;
    vector<string> bVector;
    vector<string> result;

    string input;
    for (int i = 0; i < aCount; i++)
    {
        cin >> input;
        aVector.push_back(input);
    }

    for (int i = 0; i < bCount; i++)
    {
        cin >> input;
        bVector.push_back(input);
    }

    sort(aVector.begin(), aVector.end());
    sort(bVector.begin(), bVector.end());

    set_intersection(aVector.begin(), aVector.end(), bVector.begin(), bVector.end(), back_inserter(result));

    int size = result.size();
    cout << size << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << result[i] << "\n";
    }
}