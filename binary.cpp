#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int num) {
    int first = 0;
    int last = size - 1;
    int middle;

    while (first <= last) {
        middle = (first + last) / 2;

        if (arr[middle] < num)
            first = middle + 1;
        else if (arr[middle] == num)
            return middle;
        else
            last = middle - 1;
    }

    return -1;
}

int main() {
    int i, arr[10], num;
    cout << "Enter 10 Elements (in ascending order): ";
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "\nEnter Element to be Searched: ";
    cin >> num;

    int result = binarySearch(arr, 10, num);

    if (result != -1)
        cout << "\nThe number " << num << " found at Position " << result + 1;
    else
        cout << "\nThe number " << num << " is not found in the given Array";

    cout << endl;
    return 0;
}
