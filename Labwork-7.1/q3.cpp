// 5
// 44
// 333
// 2222
// 11111

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n - i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}