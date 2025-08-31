#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 3, 4, 5, 6};
    int b[] = {2, 3, 5, 4, 7};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            };
        };
    };

    return 0;
}
