#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter arithmetic expression: ";
    getline(cin, input);

    int i = 0;

    while (i < input.length()) {

        if (isspace(input[i])) {
            i++;
            continue;
        }

        if (isdigit(input[i])) {
            string number = "";
            while (i < input.length() && isdigit(input[i])) {
                number += input[i];
                i++;
            }
            cout << "INTEGER(" << number << ")" << endl;
        }
        else if (input[i] == '+' || input[i] == '*' || input[i] == '/') {
            cout << "OPERATOR(" << input[i] << ")" << endl;
            i++;
        }

       
        else {
            cout << "INVALID(" << input[i] << ")" << endl;
            i++;
        }
    }

    return 0;
}
