//CHECK THE GIVRN NUMBER IS PRIME OR NOT
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num;
    cout<<"enter the number to check prime or not:";
    cin>>num;
    if (num==1){
        cout<<"The given number is not prime.";
    }
    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0){
            cout<<"The given number is not prime.";
            return 0;
        }
         
        cout<<"The given number is prime.";
        return 0;
        
    }
    return 0;
}
