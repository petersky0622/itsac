#include <iostream>

int main() {
    int a, b, tmp;
    std::cin >> a >> b;

    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    int max = 1;
    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0 && i > max) {
            max = i;
        }
    }

    std::cout << max << std::endl;
    return 0;
}
