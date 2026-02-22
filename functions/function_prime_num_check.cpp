// By using function find out given num is prime or not:
#include <iostream>
#include <cmath>
using namespace std;
int is_prime(int num)
{if(num>=0){
    cout<<"The given number is not prime not compisit";
}
    if (num == 1)
    {
        cout << "The given number is not prime.";
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "The given number is not prime.";
            return 0;
        }
    }
    cout << "The given num is prime.";
    return 0;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    is_prime(num);
    return 0;
}