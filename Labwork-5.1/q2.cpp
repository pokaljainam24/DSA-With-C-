// find the given number is netural or not using lader if else

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "The number is positive";
    }
    else if (num < 0)
    {
        cout << "The number is negative";
    }
    else if (num == 0)
    {
        cout << "The number is neutral";
    }
    return 0;
}