/* Schreiben Sie eine Funktion in C++, die einen String als Argument erhält und prüft, 
   ob der String ein Palindrom ist (dh, ob er vorwärts und rückwärts gelesen das gleiche Wort ergibt). */

#include <string>
#include <iostream>

using namespace std;

string palindrome(string word) {
    string drow = word;
    reverse(drow.begin(), drow.end());

    if (drow == word) {
        cout << "Yes, is palindrome" << endl;
    } else {
        cout << "Nah, it's not" << endl;
    }

    return word;
}

int main() {
    palindrome("ABBA");
    palindrome("Mama");
    palindrome("Dad");
    palindrome("dad");

    return 0;
}