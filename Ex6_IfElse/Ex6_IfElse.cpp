// Exercise 6: Number checks using IF-ELSE statements
// Checks: less than 10, evenly divisible by 2, remainder

#include <iostream>
using namespace std;

int main()
{
    // Variables
    int number;      // whole number entered by the user
    int remainder;   // remainder of number divided by 2

    // Input
    cout << "Enter a whole number: ";
    cin >> number;

    // Calculation
    remainder = number % 2;

    // Output
    // Check if the number is less than 10
    if (number < 10)
    {
        cout << "\nThe number is less than 10";
    }
    else
    {
        cout << "\nThe number is not less than 10";
    }

    // Check if the number is evenly divisible by 2
    if (remainder == 0)
    {
        cout << "\nThe number is evenly divisible by 2";
    }
    else
    {
        cout << "\nThe number is not evenly divisible by 2";
        cout << "\nThe remainder is " << remainder;
    }

    cout << endl;
    system("pause");
    return 0;
}