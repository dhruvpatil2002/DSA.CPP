#include<iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Change for ascending order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n = 5; // Declare n
    int arr[] = {4, 1, 5, 2, 3};

    // Call bubble sort function
    bubblesort(arr, n);

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
