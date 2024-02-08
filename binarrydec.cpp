#include<iostream>
using namespace std;

int binarySearchRecursive(int arr[], int first, int last, int num) {
    if (first <= last) {
        int middle = (first + last) / 2;

        if (arr[middle] == num)
            return middle;
        else if (arr[middle] < num)
            return binarySearchRecursive(arr, first, middle - 1, num);
        else
            return binarySearchRecursive(arr, middle + 1, last, num);
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

    int result = binarySearchRecursive(arr, 0, 9, num);

    if (result != -1)
        cout << "\nThe number " << num << " found at Position " << result + 1;
    else
        cout << "\nThe number " << num << " is not found in the given Array";

    cout << endl;
    return 0;
}
