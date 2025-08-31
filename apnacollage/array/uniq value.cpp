#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 9, 5, 7, 2, 4, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        bool uniqs = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                uniqs = false;
                break;
            };
        };
        if (uniqs)
        {
            cout << arr[i] << " ";
        };
    };
    return 0;
}