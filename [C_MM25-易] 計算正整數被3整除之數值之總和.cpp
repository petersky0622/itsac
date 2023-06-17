#include <iostream>

int main() {
    int a = 0;
    std::cin >> a;
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
