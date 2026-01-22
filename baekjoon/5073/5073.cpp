#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void sort(int items[])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (items[j] > items[i])
            {
                int temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

int main()
{
    while (true)
    {
        int input[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> input[i];
        }

        sort(input);

        if (input[0] == 0 && input[1] == 0 && input[2] == 0)
        {
            break;
        }
        else if (input[0] >= input[1] + input[2])
        {
            cout << "Invalid" << '\n';
        }
        else if (input[0] == input[1] && input[1] == input[2])
        {
            cout << "Equilateral" << '\n';
        }
        else if (input[0] == input[1] || input[1] == input[2] || input[0] == input[2])
        {
            cout << "Isosceles" << '\n';
        }
        else
        {
            cout << "Scalene" << '\n';
        }
    }
}
