#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 9, 5, 7, 2, 4, 3, 4, 5, 074, 565}; // still only 9 values
    int tar = 9;
    int n = sizeof(arr) / sizeof(arr[0]);

    bool found = false;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
            found = true;
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << (found ? "Found\n" : "Not Found\n");
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
