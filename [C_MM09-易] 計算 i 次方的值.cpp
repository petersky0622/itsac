#include <iostream>

int main() {
    int a;
    std::cin >> a;

    if (a <= 31) {
        std::cout << (2 << (a - 1)) << std::endl;
    } else {
        std::cout << "Value of more than 31" << std::endl;
    }

    return 0;
}
