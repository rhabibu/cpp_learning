//Make function to add 3 numbers
#include <iostream>
using namespace std;
int add (int a, int b, int c){
    return a+b+c;
}
int main (){
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    cout<<"The sum of the three number is: "<<add(a,b,c);
    cout<<endl;
    return 0;
}