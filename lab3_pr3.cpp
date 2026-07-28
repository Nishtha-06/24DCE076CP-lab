#include <iostream>
using namespace std;

long long power(long long a, long long n) {
    long long result = 1;

    while (n > 0) {
        if (n % 2 == 1)      // If exponent is odd
            result = result * a;

        a = a * a;           // Square the base
        n = n / 2;           // Divide exponent by 2
    }

    return result;
}

long long modPower(long long a, long long n, long long m) {
    long long result = 1;
    a = a % m;

    while (n > 0) {
        if (n % 2 == 1)
            result = (result * a) % m;

        a = (a * a) % m;
        n = n / 2;
    }

    return result;
}

int main() {
    long long a, n, m;

    cout << "Enter base and exponent: ";
    cin >> a >> n;

    cout << "a^n = " << power(a, n) << endl;

    cout << "Do you want modulus? (Enter 0 for No): ";
    cin >> m;

    if (m != 0) {
        cout << "a^n mod m = " << modPower(a, n, m) << endl;
    }

    return 0;
}