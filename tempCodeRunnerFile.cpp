#include <iostream>
// using namespace std;

// string filterstr(string str) {
//     string original;
//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] != ' ') {
//             original += tolower(str[i]);
//         }
//     }
//     return original;
// }
 
// void countchar(string str)
// {
//     int count;
//     for (int i = 0; i < str.length(); i++) {
//         count = 1;
//         for (int j = i + 1; j < str.length(); j++) {
//             if (str[i] == str[j]) {
//                 count++;
//                 str[j] = '0';
//             }
//         }
//         if (str[i] != '0') {
//             cout << str[i] << " occurs " << count << " times." << endl;
//         }
//     }
// }

// int main() {
//     string str, original;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     cout << "The string is: " << str << endl;
//     cout << "The frequency of each character in the string is: " << endl;
//     original = filterstr(str);
//     countchar(original);
//     return 0;
// }