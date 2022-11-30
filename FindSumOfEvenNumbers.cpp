// Using While Loop
// Find Sum of Even Numbers Upto 'N' Number.

#include <iostream>
using namespace std;

int main()
{

  int i = 2;

  int n = 0;

  int sum = 0;

  cout << "Enter a Number";

  cin >> n;

  while (i <= n)
  {

    sum = sum + i; // sum = sum + i ;

    i = i + 2;
  }
  cout << sum;

  return 0;
}
