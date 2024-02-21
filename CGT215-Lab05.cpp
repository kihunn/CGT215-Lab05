#include <iostream>
#include <vector>
#include <string>

using namespace std;


char translateChar(char c, const vector<char>& cypher) {
    if (c >= 'A' && c <= 'Z') {
        return cypher[c - 'A'];
    }
    else if (c >= 'a' && c <= 'z') {
        char upperCaseLetter = c - 32;
        char upperCaseCode = cypher[upperCaseLetter - 'A'];
        return upperCaseCode + 32;
    }
    else {
        return c;
    }
}

int main() {
    vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    string text;
    cout << "Input text to cypher: ";
    getline(cin, text);

    string translatedText;
    for (char c : text) {
        translatedText += translateChar(c, cypher);
    }

    // not sure if the output is correct since I can't figure out how to add quotes around variables in text and output
    cout << "Encoded Message: " << "" << translatedText << "" << endl;

    return 0;
}