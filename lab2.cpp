#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number:" << "\n";
    cin >> n;

    while (n <= 1)
    {
        cout << "That's not a valid number. Please re-enter:";
        cin >> n;
    }
    
    bool firstPrime = true;
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            if (!firstPrime) {
                cout << " ";
            } else {
                firstPrime = false;
            }
            cout << i;
        }
    }

    cout << "\n";
    return 0;
}
