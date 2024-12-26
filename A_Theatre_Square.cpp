#include <iostream>

void Solve() {
    long long m, n, a;
    std::cin >> m >> n >> a;
    long long x = (m + a - 1) / a; // Equivalent to ceil(m / a)
    long long y = (n + a - 1) / a; 

    std::cout << x * y << std::endl; 
}

int main() {
    Solve();
    return 0;
}
