#include <iostream>
using namespace std;

int main(){

 int n ;


  cout<<"Enter a Number"<<endl;
  
  cin>>n;

  int i = 2;


  while(i<n){

  if(n%i==0){

    cout<<"It is prime Number"<<i<<endl;
  }
  else{

 cout<<"It is not prime Number"<<i<<endl;

  }
  i = i+1;

  }

}