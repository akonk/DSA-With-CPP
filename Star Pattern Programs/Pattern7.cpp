#include <iostream>

using namespace std;

// 1
// 23
// 345
// 4567
// 56789
// 67891011

int main()
{

    int n;

    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int col = 1;

        int value = row;

        while (col <= row)
        {

            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }
}