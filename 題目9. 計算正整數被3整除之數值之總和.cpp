#include <iostream>

int f(int n) {
    if (n == 1 || n == 0) {
        return n + 1;
    } else {
        return f(n - 1) + f(n / 2);
    }
}

int main() {
    int a = 0;
    std::cin >> a;
    int ans = 0;
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0) {
            ans += i;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
