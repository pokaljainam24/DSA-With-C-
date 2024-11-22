// print odd number n to i using ehile loop

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Odd numbers from 1 to " << n << " are: ";
    i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}
