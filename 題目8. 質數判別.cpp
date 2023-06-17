#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;

    return 0;
}
