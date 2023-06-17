#include <iostream>
#include <iomanip>

int main() {
    int a = 0;
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(1) << a * 1.6 << std::endl;

    return 0;
}
