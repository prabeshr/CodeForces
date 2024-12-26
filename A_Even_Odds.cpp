#include <iostream>
void Solve() {
    long long n, k;
    std::cin >> n >> k;
    long long odd_count = (n + 1) / 2; 

    if (k <= odd_count) {
        std::cout << (2 * k - 1) << std::endl;  
    } else {
        std::cout << (k - odd_count) * 2 << std::endl;  
    }
}

int main() {
    Solve();
    return 0;
}
