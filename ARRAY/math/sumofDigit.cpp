#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;


    num = abs(num);

    while (num > 0) {
        sum += num % 10; 
        num /= 10;       
    }

    return sum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of the digits is: " << sumOfDigits(num) << endl;

    return 0;
}
