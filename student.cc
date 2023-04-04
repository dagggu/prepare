/* Schreiben Sie eine Klasse "Student" in C++, die Name, Alter und Durchschnittsnote 
   eines Schülers enthält. Schreiben Sie dann eine Klasse "Klasse", die eine Sammlung 
   von Schülern enthält. Implementieren Sie eine Methode, um den durchschnittlichen 
   Notendurchschnitt der Klasse zu berechnen. */

// import necessary libraries
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// define class Student
class Student {
public:
    Student(string name, int age, float mark) : name_(name), age_(age), mark_(mark) { }
    // get private name
    string getName() const { return name_; }
    // get private age
    int getAge() const { return age_; }
    // get private mark
    float getMark() const { return mark_; }
// define got private variables
private:
    string name_;
    int age_;
    float mark_;
};

// define class Class
class Class {
public:
    // add student to private students vector
    void addStudent(const Student& student) {
        students_.push_back(student);
    }

    // define a method to get an average mark of all students
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
    // declare private students vector
    std::vector<Student> students_;
};

int main() {
    // declare an object klasse of Class
    Class klasse;

    // Add students to klasse
    klasse.addStudent(Student("Alice", 18, 3.8));
    klasse.addStudent(Student("Bob", 19, 3.5));
    klasse.addStudent(Student("Charlie", 20, 3.7));

    // get an average mark of the added students
    cout << "Average Mark: " << klasse.getAverageMark() << endl; // Output: Average GPA: 3.66667

    return 0;
}