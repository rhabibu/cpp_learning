/*Take 5 numbers in array
Print them
Find sum*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum = 0;
    cout << "Enter number: \n";
    cin >> arr[0];
    int greater = arr[0];
    int smallest = arr[0];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number: \n";
        cin >> arr[i];
        if (arr[i] > greater)
        {
            greater = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "==============================================\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        sum = sum + arr[i];
    }
    cout << endl;
    cout << "The sum of number of arry is: "
         << sum << endl;
    cout << "The greatest number is : " << greater << endl;
    cout << "The average of the given nunber is: " << sum / 5.0 << endl;
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}