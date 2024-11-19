#include <iostream>
#include <cmath> 

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;


    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    
    return sum == originalNum;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number.\n";
    } else {
        cout << num << " is not an Armstrong number.\n";
    }

    return 0;
}

