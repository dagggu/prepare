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