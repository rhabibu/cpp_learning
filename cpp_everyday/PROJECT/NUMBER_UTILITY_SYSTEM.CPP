/*1. Count Digits
2. Check Prime
3. Reverse Number
4. Largest Digit
5. Sum of Even Digits
6. Exit*/
#include <iostream>
#include <cmath>
using namespace std;
//string choice="yes"
//while(choice=="yes"){
void operation(int choice){
    cout<<"1. Count Digits\n2. Check Prime\n3. Reverse Number\n4. Largest Digit\n5. Sum of Even Digits\n6. Exit";   
}
int countdigit (int num){
    int count=0;
    while(num!=0){
        num=num/10;
        count=count+1;  
    }return count;
}
bool isPrime (int num){
    if(num<=0){
        return 1;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 2;
        }
    }return 0;
}
long long reverseNum(int num){
    int reverse=0;
    while(num!=0){
        int digit=(num%10);
        reverse=reverse*10+digit;
        num=num/10;
    }
    return reverse;
}
int largeDigit(int num){
    int largest_digit=0;
    while(num!=0){
        int digit=(num%10);
        if(digit>largest_digit){
            largest_digit=digit;
        }num=num%10;
    }return largest_digit;
}
int sum_of_even(int num){
    int sum=0;
    while(num!=10){
        int digit=(num%10);
        if(digit%2==0){
            sum=sum+digit;
        }num=num/10;
    }return sum;
}
int main (){
    int choice;
    countdigit(choice);
    cout<<"Enter your choice:";
    cin>>choice;
    int num;
    if(choice==1){
        cout<<"Enter number:";
        cin>>num;
        cout<<"The number of digit is:"<<countdigit(num);
    }
    else if(choice==2){
         cout<<"Enter number:";
        cin>>num;
        int result=isPrime(num);
        if(result==1){
            cout<<"The give number is not prime.";
        }
        else if(result==2){
            cout<<"The given number is not prime.";
        }
        else{
            cout<<"The given number is prime.";
        }
    }
    else if(choice==3){
         cout<<"Enter number:";
        cin>>num;
        cout<<"The revese of given number is "<<" "<<reverseNum(num);
    }
    else if( choice==4){
         cout<<"Enter number:";
        cin>>num;
        cout<<"The largest digit is:"<<largeDigit(num);
    }
    else if (choice==5){
         cout<<"Enter number:";
        cin>>num;
        cout<<"The sum of the digit is :"<<sum_of_even(num);
    }
    else if(choice==6){
        cout<<"exit";
    }
    else{
        cout<<"invalid option";
    }
}