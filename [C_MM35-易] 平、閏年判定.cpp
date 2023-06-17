#include <iostream>

int main() {
    int a;
    std::cin >> a;

    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        std::cout << "Bissextile Year" << std::endl;
    } else {
        std::cout << "Common Year" << std::endl;
    }

    return 0;
}
