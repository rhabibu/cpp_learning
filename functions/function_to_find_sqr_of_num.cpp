//Make function to find square of number
#include <iostream>
using namespace std;
int square (int num) {
    return num*num;
}
int main () {
    int num;
    cout<<"Enter the number to find the square: ";
    cin>>num;
    cout<<"The square of the number is :"<<square (num);
    return 0;
}