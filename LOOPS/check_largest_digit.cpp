//check the largest digit in given number
#include <iostream>
using namespace std;
int main (){
    int num;
    int larg_digit=0;
    cout<<"Enter the number to check the largest digit: ";
    cin>> num;
    while(num != 0){
        int digit = num%10;
        if(digit>larg_digit){
            larg_digit=digit;
        }
        num=num/10;
    }cout<<"The largeat digit is:"<<larg_digit;
    return 0;
}