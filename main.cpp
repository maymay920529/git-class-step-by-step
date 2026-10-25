// Count passing scores.
#include <iostream>
int main() {
    int score, passed = 0;
    while (std::cin >> score) {
        if (score >= 60) ++passed;
    }
    std::cout << passed << '\n';
}
