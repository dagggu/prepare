/* Schreiben Sie eine Klasse "Student" in C++, die Name, Alter und Durchschnittsnote 
   eines Schülers enthält. Schreiben Sie dann eine Klasse "Klasse", die eine Sammlung von Schülern enthält. 
   Implementieren Sie eine Methode, um den durchschnittlichen Notendurchschnitt der Klasse zu berechnen. */

#include <string>
#include <vector>

using namespace std;

class Student {
public:
    string name(string str);
    int age(int x);
    double note(double y);
};

class Class : public Student {
public:
    // student has a name (string) and a mark (double). Students looks like: students = {{Karla, 3.1}, {Anton, 1.2}, {Malek, 2.0}}
    vector<vector> students(vector<string, double> student) {
        student.push_back(name, note);

        return students;
    };

    // Notendurchschnitt: sum of the notes / all students
    int marks = 0;
    int students = 0; 
    for (auto )
};