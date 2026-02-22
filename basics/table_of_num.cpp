//Program 4: Print table of a number
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"input the number do you want to print table: ";
    cin>>a;
    for (int i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<<a*i <<endl;
    }
    return 0;
}