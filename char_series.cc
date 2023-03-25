/* Schreiben Sie eine Funktion in C++, die einen Vektor von Zeichenfolgen als Argument erhält 
   und eine neue Zeichenfolge zurückgibt, die alle Elemente des Vektors in umgekehrter Reihenfolge enthält. */

#include <vector>
#include <iostream>

using namespace std;

vector<char> series(vector<char> characters) {
    vector<char> reversed = reverse(characters.begin(), characters.end());

    return reversed;
}

int main() {
    vector<char> myChars = {'a', 'b', 'c'};
    cout << series(myChars) << endl;
}