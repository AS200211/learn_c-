#include<iostream>
#include<string>

using namespace std;

void revstr(string &str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Before reversing the string: " << str << endl;
    revstr(str);
    cout << "After reversing the string: " << str << endl;

    return 0;
}