// By using the function find the largest number
#include <iostream>
using namespace std;
int largest_digit(int num)
{
    int lar_digit = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit > lar_digit)
        {
            lar_digit = digit;
        }
        num = num / 10;
    }return lar_digit;
}
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    largest_digit(num);
    cout << "The largest digit is" <<largest_digit(num);
    return 0;
}