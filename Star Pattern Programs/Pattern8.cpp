#include <iostream>
using namespace std;

//1
//21
//321
//4321
//54321
//654321
//7654321
//87654321
//987654321
//10987654321

int main(){

    int n ;

    cin>>n;

    int row = 1;

    while(row<=n){

        int col = 1;

        while (col<=row)
        {
            cout<<(row-col+1)<<" ";

            col++;
        }
        cout<<endl;
        row++;
        
    }


}