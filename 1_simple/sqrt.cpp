#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number, result;
    cout << "Enter any number: ";
    cin >> number;
    result = pow(number, 0.5);
    cout << "\nSqure of " << number << " is: " << result << endl;
}

/*
OUTPUT
Enter any number: 9
Squre of 9 is: 3
*/