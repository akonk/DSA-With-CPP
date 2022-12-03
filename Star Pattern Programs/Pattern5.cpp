#include <iostream>
using namespace std;

//*****
//****
//***
//**
//*

int main()
{

    int row = 1;

    while (row <= 5)
    {

        int col = row - 1;
        while (col <= 4)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}