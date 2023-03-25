class A {
public:
    virtual int method() = 0; 

    ...
}

class B : public A {
    virtual int method() {
        ...
    }
}

int add(int x, int y) { return x+y; } 
int invoke(int x, int y, int (*func)(int, int)) { return func(x,y); }

int main() {
    invoke(8, 5, &add);
    
    return 0;
}

template <typename T>

T sort(T x, T y) {
    ...
    return 
}

int main() {
    cout << sort(3.5, 6.0) << endl;
    cout << sort(5, 4) << endl;
}

class Animal {
public:
    virtual void sound() = 0;
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Woof!" << endl;
    }
};

int main() {
    Cat cat;
    Dog dog;

}

class Vehicle {
public:
    void brand();
    int year(int x);
    void bipbup();
};

class BMW : public Vehicle {
public:
    void brand() { cout << "It's a BMW!" << endl; }
    int year(int x) { return x; }
    void bipbup() { cout << "I make a bip dop dop!" << endl; }
};

int main() {
    BMW car;

    car.brand();
    cout << "I'm a " << car.year(20) << " years old!" << endl;
    car.bipbup();
}