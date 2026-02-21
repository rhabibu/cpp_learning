/*1. Count Digits
2. Check Prime
3. Reverse Number
4. Largest Digit
5. Sum of Even Digits
6. Exit*/
#include <iostream>
#include <cmath>
using namespace std;
// string choice="yes"
// while(choice=="yes"){
void operation()
{
    cout << "1. Count Digits\n2. Check Prime\n3. Reverse Number\n4. Largest Digit\n5. Sum of Even Digits\n6. Exit\n";
}
int countdigit(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count = count + 1;
    }
    return count;
}
bool isPrime(int num)
{
    if (num <= 0)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
long long reverseNum(int num)
{
    int reverse = 0;
    while (num != 0)
    {
        int digit = (num % 10);
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return reverse;
}
int largeDigit(int num)
{
    int largest_digit = 0;
    while (num != 0)
    {
        int digit = (num % 10);
        if (digit > largest_digit)
        {
            largest_digit = digit;
        }
        num = num / 10;
    }
    return largest_digit;
}
int sum_of_even(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int digit = (num % 10);
        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }
        num = num / 10;
    }
    return sum;
}
int main()
{
    string is_continues = "yes";
    while (is_continues == "yes")
    {
        int choice;
        operation();
        cout << "Enter your choice:\n";
        cin >> choice;
        int num;
        if (choice == 1)
        {
            cout << "Enter number:\n";
            cin >> num;
            cout << "The number of digit is:\n"
                 << countdigit(num) << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter number:\n";
            cin >> num;
            int result = isPrime(num);
            if (result == false)
            {
                cout << "The give number is not prime.\n";
            }
            else if (result == false)
            {
                cout << "The given number is not prime.\n";
            }
            else
            {
                cout << "The given number is prime.\n";
            }
        }
        else if (choice == 3)
        {
            cout << "Enter number:\n";
            cin >> num;
            cout << "The revese of given number is :" << " " << reverseNum(num) << endl;
        }
        else if (choice == 4)
        {
            cout << "Enter number:\n";
            cin >> num;
            cout << "The largest digit is:" << largeDigit(num) << endl;
        }
        else if (choice == 5)
        {
            cout << "Enter number:\n";
            cin >> num;
            cout << "The sum of the digit is :" << sum_of_even(num) << endl;
        }
        else if (choice == 6)
        {
            cout << "exit\n";
        }
        else
        {
            cout << "invalid option\n";
        }
        cout << "do you want to continue:yes/no:\n";
        cin >> is_continues;
    }
    return 0;
}