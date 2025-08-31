#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0, pro = 1;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        pro *= arr[i];
    }
    cout << "Sum: " << sum << "\n"
         << "Product: " << pro << "\n";

    return 0;
}