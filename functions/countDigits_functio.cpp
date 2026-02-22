//countDigits function
#include <iostream>
using namespace std;
int count_digit(int num){
    int count=0;
    if(num==0){
        return 1;
    }
    while( num!=0){
        count=count+1;
        num=num/10;
    }
    return count;
}
int main (){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Number contain"<<" "<<count_digit(num)<<" "<<"digit";
    return 0;
}