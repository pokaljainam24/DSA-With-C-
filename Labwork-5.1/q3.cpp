// find an average mark from a total of three subjects marks

#include <iostream>
using namespace std;

int main()
{
    int marks1, marks2, marks3, average;
    cout << "Enter marks of subject 1: ";
    cin >> marks1;
    cout << "Enter marks of subject 2: ";
    cin >> marks2;
    cout << "Enter marks of subject 3: ";
    cin >> marks3;
    average = (marks1 + marks2 + marks3) / 3;
    cout << "Average marks: " << average << endl;
    return 0;
}