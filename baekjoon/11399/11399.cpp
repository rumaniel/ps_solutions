#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int inputCount;

    cin >> inputCount;

    int arr[inputCount];

    for (int i = 0; i < inputCount; i++)
    {
        cin >> arr[i];
    }
    std::sort(arr, arr + inputCount);

    int result = 0;
    for (int i = 1; i <= inputCount; i++)
    {
        result += accumulate(arr, arr + i, 0);
    }

    cout << result;
}
