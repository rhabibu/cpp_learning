//Sum of first N numbers
#include <iostream>
#include <string>
using namespace std;
int main(){
 int a;
 cout<<"enter the number do you want to some:";
 cin>>a;
 int sum=0;
 for(int i=1;i<=a;i++){
    sum=sum+i;
 }
 cout<<"the sum of the given number is:"<<sum;
 return 0;
}