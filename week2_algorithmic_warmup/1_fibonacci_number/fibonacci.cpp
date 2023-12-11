#include <cassert>
#include <iostream>

using namespace std;

int fibonacci_naive(int n) {
    if (n <= 1) return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    if (n <= 1) return n;

    long long previous = 0;
    long long current = 1;
    long long x = 0;
    for (size_t i = 0; i < n - 1; i++) {
        x = current;
        current += previous;
        previous = x;
    }
    return current;
}

int main() {
    int n = 0;
    cin >> n;

    cout << fibonacci_fast(n) << '\n';
    return 0;
}
