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
    a = f(a);
    std::cout << a << std::endl;

    return 0;
}
