// 5
// 45
// 345
// 2345
// 12345

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}