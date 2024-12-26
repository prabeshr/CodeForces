#include <iostream>
#include <string>
#include <cctype> 

int Solve() {
    std::string first, second;
    std::cin >> first >> second;

    for (int i = 0; i < first.length(); i++) {
        char ch1 = std::tolower(first[i]);  
        char ch2 = std::tolower(second[i]); 

        if (ch1 < ch2) return -1; 
        if (ch1 > ch2) return 1;  
    }
    return 0; 
}

int main() {
    std::cout << Solve();
    return 0;
}
