
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    while (n--) {
        int number;
        cin >> number;
        while (number > 0) {
            string str = to_string(number);
            vector<int> digits;
            for (char c : str) {
                digits.push_back(c - '0');
            }

            bool modified = false;
            for (int j = 0; j < digits.size() - 1; j++) {
                if (digits[j] == 3 && digits[j + 1] == 3) {
                    digits.erase(digits.begin() + j, digits.begin() + j + 2);
                    modified = true;
                    break;
                }
            }

            if (modified) {
                number = 0;
                for (int digit : digits) {
                    number = number * 10 + digit;
                }
            } else if (number >= 33) {
                number -= 33;
            } else {
                break;
            }
        }

        if (number == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() 
{
    solve();
    return 0;

}
