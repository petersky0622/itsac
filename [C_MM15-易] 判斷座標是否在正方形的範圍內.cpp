#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    if (x > 100 || y > 100) {
        std::cout << "outside" << std::endl;
    } else {
        std::cout << "inside" << std::endl;
    }

    return 0;
}
