/* Schreiben Sie eine Klasse "Student" in C++, die Name, Alter und Durchschnittsnote 
   eines Schülers enthält. Schreiben Sie dann eine Klasse "Klasse", die eine Sammlung von Schülern enthält. 
   Implementieren Sie eine Methode, um den durchschnittlichen Notendurchschnitt der Klasse zu berechnen. */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Student {
public:
    Student(string name, int age, float mark) : name_(name), age_(age), mark_(mark) { }
    string getName() const { return name_; }
    int getAge() const { return age_; }
    float getMark() const { return mark_; }
private:
    string name_;
    int age_;
    float mark_;
};

class Class {
public:
    void addStudent(const Student& student) {
        students_.push_back(student);
    }

    float getAverageMark() const {
        if (students_.empty()) {
            return 0;
        }
        float sum = 0;
        for (const auto& student : students_) {
            sum += student.getMark();
        }
        return sum / students_.size();
    }
private:
    std::vector<Student> students_;
};

int main() {
    Class klasse;

    klasse.addStudent(Student("Alice", 18, 3.8));
    klasse.addStudent(Student("Bob", 19, 3.5));
    klasse.addStudent(Student("Charlie", 20, 3.7));
    cout << "Average Mark: " << klasse.getAverageMark() << endl; // Output: Average GPA: 3.66667

    return 0;
}