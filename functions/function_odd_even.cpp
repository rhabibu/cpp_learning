//using function find the given number is odd or even:
#include <iostream>
using namespace std;
void odd_even (int num){
    if (num % 2==0){
        cout<<"The given number is even.";
    }
    else {
        cout<<"The given number is odd.";
    }
}
int main (){
    int num;
    cout<<"Enter number to check odd and even: ";
    cin>> num;
    odd_even(num);
    return 0;
}