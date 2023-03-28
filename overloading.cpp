#include <string>
#include <iostream>

class Person {
public:
    std::string name;
    int age;

    bool operator==(const Person& other) const {
        return name == other.name && age == other.age;
    }
};

int main() {
    Person p1{"Alice", 30};
    Person p2{"Bob", 25};
    Person p3{"Alice", 30};

    if (p1 == p2) {
        std::cout << "p1 and p2 are the same\n";
    }
    if (p1 == p3) {
        std::cout << "p1 and p3 are the same\n";
    }
    return 0;
}