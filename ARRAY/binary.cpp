#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod2(int n){
    int binaryNo = 0;
    int i = 0;
    while(n > 0){
        int bit = n & 1; // Get the last bit of n
        binaryNo = bit * pow(10, i++) + binaryNo; // Shift the bit by power of 10
        n = n >> 1; // Right shift n to process the next bit
    }
    return binaryNo;
}

int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int binary = decimalToBinaryMethod2(n);
    cout << "Binary representation: " << binary << endl;
    return 0;
}
