#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int sum = 1;

    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;

    return 0;
}
