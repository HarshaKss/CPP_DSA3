#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element to find: ";
    cin >> target;


    int index = findFirstOccurrence(arr, size, target);

    if (index != -1) {
        cout << "The first occurrence of " << target << " is at index " << index << endl;
    } else {
        cout << "The element " << target << " is not found in the array." << endl;
    }
}
