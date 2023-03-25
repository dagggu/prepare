/* Schreiben Sie eine Funktion in C++, die einen Vektor von Zeichenfolgen als Argument erhält 
   und eine neue Zeichenfolge zurückgibt, die alle Elemente des Vektors in umgekehrter Reihenfolge enthält. */

#include <vector>
#include <string>
#include <iostream>

using namespace std;

string strings(vector<string> v) {
    string reversed;

    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        reversed += *it;
    }

    return reversed;
}

int main() {
    std::vector<std::string> v {"Hello", "World", "!"};
    std::string res = strings(v);
    std::cout << res << std::endl;

    return 0;
}