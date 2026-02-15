//Count digits of a number (example: 1234 → 4 digits)
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number of digit to count it:";
    cin>> a;
    int count=0;
    while (a!=0){
        a=a/10;
        count++;
    }
    cout<<"the no of digit is"<<count;
}