#include <iostream>

int main() {
    long long int a;
    while (std::cin >> a) {
        long long int ans = 1;

        while (a) {
            ans *= a;
            a--;
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
