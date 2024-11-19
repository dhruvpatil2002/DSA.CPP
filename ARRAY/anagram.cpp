#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool areAnagrams(const string& str1, const string& str2) {
    
    if (str1.length() != str2.length())
        return false;

    
    vector<int> charCount(256, 0);

    for (size_t i = 0; i < str1.length(); i++) {
        charCount[str1[i]]++;
        charCount[str2[i]]--;
    }

    
    for (int count : charCount) {
        if (count != 0)
            return false;
    }

    return true;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams.\n";
    } else {
        cout << "The strings are not anagrams.\n";
    }

    return 0;
}
