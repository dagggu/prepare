/* Schreiben Sie eine Klasse "Rectangle" in C++, die Länge und Breite eines Rechtecks enthält. 
   Schreiben Sie dann eine Klasse "Square", die von "Rectangle" abgeleitet ist und ein Quadrat repräsentiert. 
   Implementieren Sie eine Methode, um den Umfang eines Quadrats zu berechnen. */

#include <iostream>

using namespace std;

class Rectangle {
public:
    int volume(int length, int width);
};

class Square : public Rectangle {
public:
    int volume(int length, int width) {
        return length * width;
    }
};

int main() {
    Square mySquare;

    cout << mySquare.volume(20, 35) << endl;
}