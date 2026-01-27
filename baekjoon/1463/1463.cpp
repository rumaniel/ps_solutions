#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int *arr;

int getMin(int a, int b, int c)
{
    int min = a;

    if (min > b)
    {
        min = b;
    }

    if (min > c)
    {
        min = c;
    }

    return min;
}

int calculate(int n)
{
    if (n == 1)
        return 0;

    if (arr[n] > 0 && arr[n] < n)
    {
        return arr[n];
    }

    int n3 = INT_MAX, n2 = INT_MAX, n1 = INT_MAX;

    if (n % 3 == 0)
    {
        n3 = calculate(n / 3) + 1;
    }
    if (n % 2 == 0)
    {
        n2 = calculate(n / 2) + 1;
    }

    n1 = calculate(n - 1) + 1;

    return arr[n] = getMin(n3, n2, n1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int targetNumber;

    cin >> targetNumber;

    arr = new int[targetNumber];

    cout << calculate(targetNumber);
}
