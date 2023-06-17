#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int max = 1;
    for (int i = 1; i < a; i++) {
        if (a % i == 0 && i > max)
            max = i;
    }

    if (max == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
