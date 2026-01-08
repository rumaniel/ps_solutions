#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void shiftLeft(int *chunk, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        chunk[i] = chunk[i + 1];
    }
}

bool isMatched(int *chunk, int *results, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (chunk[i] != results[i])
            return false;
    }

    return true;
}

int main()
{
    int input = 0;

    cin >> input;

    int size = (int)log10(input) + 1;

    // early return
    if (size == 1)
    {
        cout << input;
        return 0;
    }

    // index of array.
    int index = 1;
    int chunks[size];

    // fill default dqeue and result.
    // input limit is under the 100000, so no need to handle exception.
    for (index; index <= size; index++)
    {
        chunks[index - 1] = index;
    }

    // fill result
    int results[size];
    for (int i = size - 1, rest = input; i >= 0; i--)
    {
        results[i] = rest % 10;
        rest /= 10;
    }

    int currentValue = index;
    int nextValue = index;
    index = 1;
    while (nextValue <= input)
    {
        bool gotcha = isMatched(chunks, results, size);

        if (gotcha)
        {
            break;
        }

        // shift queue
        shiftLeft(chunks, size);
        // pick next item

        int currentSize = currentValue == 0 ? 0 : (int)log10(currentValue);
        int currentPow = pow(10, currentSize);
        int currentChunk = currentValue / pow(10, currentSize);

        chunks[size - 1] = currentChunk;

        currentValue -= currentChunk * currentPow;

        // next index
        if (currentSize == 0)
        {
            currentValue = ++nextValue;
        }
        index++;
    }

    cout << index;
}
