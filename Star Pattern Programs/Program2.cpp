#include<iostream>
using namespace std;

// Star Pattern Program 

//1
//23
//456
//78910

int main(){

int i;
int n;

cin>>n;

i = 1;
while(i<=n){

    int j = 1;
    while(j<=i){

        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i = i+1;
}

return 0;
}