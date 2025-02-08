// Write a program that:
// a. Accepts a string from the user.

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    return 0;
}

// b. Checks whether the string is a palindrome (ignoring spaces and case sensitivity).

#include <iostream>
using namespace std;

string filterstr(string str) {
    string original;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            original += tolower(str[i]);
        }
    }
    return original;
}

string reversestr(string str) {
    string reverse;
    for (int i = str.length() - 1; i >= 0; i--) {
        reverse += str[i];
    }
    return reverse;
}

int main() {
    string str, original, reverse;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    original = filterstr(str);
    reverse = reversestr(original);
    if (original == reverse) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}

// Counts and displays the frequency of each character in the string (case insensitive).

#include <iostream>
using namespace std;

string filterstr(string str) {
    string original;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            original += tolower(str[i]);
        }
    }
    return original;
}
 
void countchar(string str)
{
    int count;
    for (int i = 0; i < str.length(); i++) {
        count = 1;
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '0';
            }
        }
        if (str[i] != '0') {
            cout << str[i] << " occurs " << count << " times." << endl;
        }
    }
}

int main() {
    string str, original;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    cout << "The frequency of each character in the string is: " << endl;
    original = filterstr(str);
    countchar(original);
    return 0;
}

// d. Replace all vowels in the string with a specified character (e.g., *).

#include <iostream>
using namespace std;

string filterstr(string str) {
    string original;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            original += tolower(str[i]);
        }
    }
    return original;
}

void replace(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = '*';
        }
    }
    cout << "The string after replacing all vowels with '*' is: " << str << endl;
}

int main() {
    string str, original;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The string is: " << str << endl;
    original = filterstr(str);
    replace(original);
    return 0;
}