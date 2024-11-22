// print leep year between teo numbers using while loop

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first year: ";
    cin >> a;

    cout << "Enter the second year: ";
    cin >> b;

    cout << "Leap years between " << a << " and " << b << " are: ";
    while (a <= b)
    {
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            cout << a << " ";
        }
        a++;
    }
    return 0;
}