// 10101
//  0101
//   101
//    01
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
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << (j % 2);
        }
        cout << endl;
    }

    return 0;
}
