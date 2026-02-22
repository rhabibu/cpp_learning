//check prime number or not
#include <iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"Enter the number to check prime or not:";
    cin>>num;
    for(int run=1; run<=num
        ; run++){
        if(num%run==0){
            count=count+1;
        }
    }
    if(count>2){
        cout<<"the given number is not prime";
    }
    else{
        cout<<"the given number is prime";
    }
    return 0;
}