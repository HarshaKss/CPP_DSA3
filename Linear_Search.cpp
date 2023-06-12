#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout<<i+1<<endl;
            return true; 
        }
    }
    return false; 
}

int main() {
    int arr[] = {3, 9, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    if (linearSearch(arr, n, key)) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }
}
