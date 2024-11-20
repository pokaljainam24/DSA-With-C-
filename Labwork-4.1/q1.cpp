// evaluate formula: (x+y)^2

#include <iostream>

int main()
{
    double x, y;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    std::cout << "The value of (x+y)^2 is: " << (x + y) * (x + y) << std::endl;
    return 0;
}