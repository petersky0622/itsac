#include <iostream>
#include <limits>
#include <iomanip>

int main() {
    float a[10] = {0};
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }

    float max = a[0];
    float min = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    std::cout << "maximum:" << std::fixed << std::setprecision(2) << max << std::endl;
    std::cout << "minimum:" << std::fixed << std::setprecision(2) << min << std::endl;

    return 0;
}
