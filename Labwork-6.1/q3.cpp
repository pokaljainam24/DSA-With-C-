// print 1 to n using while loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}