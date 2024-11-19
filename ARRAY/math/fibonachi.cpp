#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Fibonacci sequence: ";
        for (int i = 0; i < n; i++) {
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
