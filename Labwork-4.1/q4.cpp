// swap variable and store in therd variable

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, temp;
    cout << "Before swapping: \n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "After swapping: \n";
    temp = a; 
    a = b; 
    b = temp; 
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}


// only 2 variable using

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    cout << "Before swapping: \n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "After swapping: \n";
    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}