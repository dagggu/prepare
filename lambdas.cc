#include <iostream>

int main() {
    int y = 14;
    int z = 25;
    int o = -7;
    auto result = [=, &y](int x) { return y/o + x*z; };
    std::cout << result(5) << std::endl;

    return 0;
}