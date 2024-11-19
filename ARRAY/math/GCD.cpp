#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << GCD(20, 28) << endl;
    return 0;
}
