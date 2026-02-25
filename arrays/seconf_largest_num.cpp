#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Please enter at least 2 numbers." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int secondLargest = -1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        cout << "No distinct second largest number found." << endl;
    } else {
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}