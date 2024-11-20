// evaluate formula: (x+y)^3

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "The value of (x+y)^3 is: " << (x + y) * (x + y) * (x + y);
    cout << endl;
    return 0;
}