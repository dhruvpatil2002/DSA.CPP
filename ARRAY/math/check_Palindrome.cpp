#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int start = 0, end = str.length() - 1;

    
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }

    return true;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << str << " is a palindrome.\n";
    } else {
        cout << str << " is not a palindrome.\n";
    }

    return 0;
}
