// SQUER Pattern

// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int i, j;
//     for (i = 1; i <= 5; i++){
//         for (j = 1; j <= 5; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// piramid number and star

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             // cout << j << " ";
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// With space pyramid

//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++){
//         for (j = 1; j <= n - i; j++){
//             cout << "  ";
//         }
//         for (j = 1; j <= i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n = 6;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "  ";
//         }
//         for (j = 1; j <= n - i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//    *
//   ***
//  *****
// *******

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// ******
// *    *
// ******
// *    *

#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == 3)
        {
            cout << "* * * * *";
        }
        else
        {
            cout << "*       *";
        }
        cout << endl;
    }
    return 0;
}
