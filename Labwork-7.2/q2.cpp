//     5
//    45
//   345
//  2345
// 12345

#include <iostream>
using namespace std;
int main()
{
    int i, j, n=5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = n - i + 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}