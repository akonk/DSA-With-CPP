#include<iostream>
using namespace std;

int main(){

    char a ;

    cin>>a;

    int c = int(a);

    if( 65< c && c < 90 ){

        cout<<"This is char is in UpperCase.and Ascii Value is "<<c;;
    }
    else if (97<c && c<122){

        cout<<"You entered alphabet is in Lowercase. and alphabet ascii value is "<<c;
    }
    else if( 48 < c  && c <57 ){

cout<<"You Entered Digit and digit Ascii value is "<<c<<endl;
    

    }
    else{

cout<<"Check Your Character Comparison.";


    }
}