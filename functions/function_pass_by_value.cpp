// pass by value in function
#include <iostream>
using namespace std;
void copy_value(int x)
{
    x = x + 5;
    cout << x << " ";
}
int main()
{
    int x = 5;
    copy_value(x);
    cout << x;
    return 0;
}