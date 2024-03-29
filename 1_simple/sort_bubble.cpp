#include <iostream>
using namespace std;

int main()
{
    //declaring array
    int array[5];
    cout << "Enter 5 numbers randomly : " << endl;
    for (int i = 0; i < 5; i++)
    {
        //Taking input in array
        cin >> array[i];
    }
    cout << endl;
    cout << "Input array is: " << endl;

    for (int j = 0; j < 5; j++)
    {
        //Displaying Array
        cout << "\t\t\tValue at " << j << " Index: " << array[j] << endl;
    }
    cout << endl;
    // Bubble Sort Starts Here
    int temp;
    for (int i2 = 0; i2 <= 4; i2++)
    {
        for (int j = 0; j < 4; j++)
        {
            //Swapping element in if statement
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    // Displaying Sorted array
    cout << "  Sorted Array is: " << endl;
    for (int i3 = 0; i3 < 5; i3++)
    {
        cout << "\t\t\tValue at " << i3 << " Index: " << array[i3] << endl;
    }
    return 0;
}

/*
OUTPUT
Enter 5 numbers randomly :
55
65
12
37
26

Input array is:
                        Value at 0 Index: 55
                        Value at 1 Index: 65
                        Value at 2 Index: 12
                        Value at 3 Index: 37
                        Value at 4 Index: 26

Sorted Array is:
                        Value at 0 Index: 12
                        Value at 1 Index: 26
                        Value at 2 Index: 37
                        Value at 3 Index: 55
                        Value at 4 Index: 65


*/