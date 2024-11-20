// find minimum number

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter one numbers: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;
    cout << "Minimum number is: ";
    if (a < b && a < c)
    {
        cout << a;
    }
    else if (b < a && b < c)
    {
        cout << b;
    }
    else(c < a && c < b);
    {
        cout << c;
    }
    return 0;
}
