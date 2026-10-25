#include <iostream>
int main() {
    int score, passed = 0;
    while (std::cin >> score) {
        if (score >= 70) ++passed;
    }
    std::cout << passed << '\n';
}
