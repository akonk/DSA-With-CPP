#include <iostream>
#include<cmath>  

using namespace std;

int main(){

    int weight;
    float height;  
    float Calculation;

cout<<"Enter Weight in Kilogram ==> ";
 
 cin>>weight;

 cout<<"Enter Height in Centimeters ==> ";
 cin>>height;

 Calculation = weight /pow((height/100),2);

 cout<<"Your BMI is " << " ==> " <<Calculation<<endl ;



 if (18.5 < Calculation && Calculation < 24.9) {

 cout<<"Your Weight is in Good Condition";


 }

 else if(25 < Calculation && Calculation < 29.9)
 {
       cout<<"Your BMI level is in OverWeight Condition.";
   
 } else if(30 < Calculation && Calculation < 39.9){

    
       cout<<"Your BMI level is in Obese Condition.";
   
 }
 else if (Calculation < 18 ) {

       cout<<"Your BMI level is in UnderWeight Condition.";

 } 
 else{
    
       cout<<"Enter Proper Details.";
 }

return 0;
}