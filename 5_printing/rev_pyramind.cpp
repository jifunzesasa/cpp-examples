#include <iostream>
using namespace std;
int main()
{
    int rows, i, j, space;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (i = rows; i >= 1; --i)
    {
        for (space = 0; space < rows - i; ++space)
            cout << "  ";
        for (j = i; j <= 2 * i - 1; ++j)
            cout << "* ";
        for (j = 0; j < i - 1; ++j)
            cout << "* ";
        cout << endl;
    }
    return 0;
}

/*
Enter number of rows: 6
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *

*/