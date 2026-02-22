// ake input from user, then add 20 inside the function.
#include <iostream>
using namespace std;
void add(int x)
{
    x = x + 20;
    cout << x << endl;
}
int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    add(x);
    cout << x << endl;
}