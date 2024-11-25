// A
// BA
// CBA
// DCBA
// EDCBA

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << char(65 + i - j) << " ";
        }
        cout << endl;
    }
    return 0;
}