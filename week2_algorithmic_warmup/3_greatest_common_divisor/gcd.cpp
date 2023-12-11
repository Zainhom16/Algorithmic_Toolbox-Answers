#include <iostream>

using namespace std;

int gcd_naive(int a, int b) {
    int current_gcd = 1;
    for (int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            if (d > current_gcd) {
                current_gcd = d;
            }
        }
    }
    return current_gcd;
}

int gcd(long long x, long long y) {
    long long a = max(x, y);
    long long b = min(x, y);
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
