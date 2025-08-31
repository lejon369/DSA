#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 5, 7, 3, 9, 29, 12};
    int sz = 8;
    int target = 10;

    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}