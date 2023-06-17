#include <iostream>



int main() {
    int a;
    std::cin >> a;
    if (a >= 3 && a <= 5) {
        std::cout << "Spring" << std::endl;
    } else if (a >= 6 && a <= 8) {
        std::cout << "Summer" << std::endl;
    } else if (a >= 9 && a <= 11) {
        std::cout << "Autumn" << std::endl;
    } else {
        std::cout << "Winter" << std::endl;
    }

    return 0;
}
