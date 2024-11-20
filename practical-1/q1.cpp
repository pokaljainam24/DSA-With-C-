//  1 :
// Grade Calculation Develop a program that takes a score out of 100 as input from the user and calculates the corresponding grade using a ternary
// operator.Allocate grades from A to F for various ranges.

#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter your score out of 100: ";
    cin >> score;

    string grade = (score >= 90) ? "A" : (score >= 80 ? "B" : (score >= 70 ? "C" : (score >= 60 ? "D" : "F")));

    cout << "Your grade is: " << grade << endl;

    switch (grade[0])
    {
    case 'A':
        cout << "Excellent work!" << endl;
        break;
    case 'B':
        cout << "Well done!" << endl;
        break;
    case 'C':
        cout << "Good job!" << endl;
        break;
    case 'D':
        cout << "You passed, but you could do better!" << endl;
        break;
    case 'F':
        cout << "Sorry, you failed!" << endl;
        break;
    }

    if (grade == "A" || grade == "B" || grade == "C" || grade == "D")
    {
        cout << "Congratulations! You are eligible for the next level" << endl;
    }
    else
    {
        cout << "Please try again next time" << endl;
    }

    return 0;
}