// evaluate formula: (x-y)^2

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "The value of (x-y)^2 is: " << (x - y) * (x - y);
    return 0;
}