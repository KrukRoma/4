#include <iostream>

using namespace std;

int main()
{
    //1
    int size;
    char symbol;

    cout << "Enter the size of the square: ";
    cin >> size;
    cout << "Enter the symbol: ";
    cin >> symbol;

    for (int i = 0; i < size; ++i) 
    {
        for (int j = 0; j < size; ++j) 
        {
            cout << symbol << " ";
        }
        cout << endl;
    }

    //2
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digitCount = 0;
    int sum = 0;
    int zeroCount = 0;
    int tempNumber = number;

    while (tempNumber != 0) 
    {
        int digit = tempNumber % 10;
        sum += digit;
        digitCount++;
        if (digit == 0) 
        {
            zeroCount++;
        }
        tempNumber /= 10;
    }

    double average = (double)sum / digitCount;

    cout << "Number of digits: " << digitCount << endl;
    cout << "Sum of digits: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Number of zeros: " << zeroCount << endl;





    //3
    int rows, columns, cellSize;
    char whiteCell, blackCell;
    cout << "Enter the width of the board: ";
    cin >> rows;
    cout << "Enter the height of the board: ";
    cin >> columns;
    cout << "Enter the cell size: ";
    cin >> cellSize;
    cout << "Enter the color for white cells: ";
    cin >> whiteCell;
    cout << "Enter the color for black cells: ";
    cin >> blackCell;

    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < columns; ++j) 
        {
            if ((i + j) % 2 == 0) 
            {
                for (int k = 0; k < cellSize; ++k) 
                {
                    cout << whiteCell;
                }
            }
            else 
            {
                for (int k = 0; k < cellSize; ++k) 
                {
                    cout << blackCell;
                }
            }
        }
        cout << endl;
    }
}

