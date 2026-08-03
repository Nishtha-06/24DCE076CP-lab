#include <iostream>
using namespace std;

//Time Complexity: O(log n)
int main()
{
    long long a, n, m;
    long long ans = 1;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter exponent: ";
    cin >> n;

    long long base = a;
    long long exp = n;

    while (exp > 0)
    {
        if (exp % 2 == 1)
            ans = ans * base;

        base = base * base;
        exp = exp / 2;
    }

    cout << "a^n = " << ans << endl;

    cout << "Enter modulus (0 if not required): ";
    cin >> m;

    if (m != 0)
        cout << "a^n mod m = " << ans % m << endl;

    return 0;
}
