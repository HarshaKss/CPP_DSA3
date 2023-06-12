#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int index = findFirstOccurrence(arr, size, target);

    if (index != -1) {
        cout << "The first occurrence of " << target << " is at index " << index << std::endl;
    } else {
        cout << "The element " << target << " is not found in the array." << std::endl;
    }
}
