#include<iostream>
using namespace std;

int binarySearchIterative(int arr[], int first, int last, int num) {
    while (first <= last) {
        int middle = (first + last) / 2;

        if (arr[middle] == num)
            return middle;
        else if (arr[middle] < num)
            last = middle - 1;
        else
            first = middle + 1;
    }

    return -1;
}

int main() {
    int i, arr[10], num;
    cout << "Enter 10 Elements in descending order: ";
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "\nEnter Element to be Searched: ";
    cin >> num;

    int result = binarySearchIterative(arr, 0, 9, num);

    if (result != -1)
        cout << "\nThe number " << num << " found at Position " << result + 1;
    else
        cout << "\nThe number " << num << " is not found in the given Array";

    cout << endl;
    return 0;
}
