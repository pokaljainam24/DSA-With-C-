// 54321
//  4321
//   321
//    21
//     1

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
