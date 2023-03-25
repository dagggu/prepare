/* Schreiben Sie eine Funktion in C++, die einen Vektor von Ganzzahlen 
   als Argument erhält und das Maximum des Vektors zurückgibt. Die Funktion 
   sollte eine Ausnahme auslösen, wenn der Vektor leer ist. */

#include <vector>
#include <iostream>

using namespace std;

int vec_max(vector<int> vec) {
    int max = vec[0];
    for (auto el : vec) {
        if (vec[el] > max) {
            max = vec[el];
        }
    }
    return max;
}

int main() {
    vector<int> myVec = {1, 2, 3, 4, 5};
    try { 
        vec_max(myVec); 
    } catch(vector<int>) { 
        cout << "Caught a vec exception" << endl; 
    }
    cout << vec_max(myVec) << endl;

    return 0;
}