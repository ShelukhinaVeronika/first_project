#include <iostream>
using namespace std;

void fib_iterative(int n) {
    int a = 0, b = 1;
    if (n >= 1) {
        cout << a << endl;
    }
    if (n >= 2) {
        cout << b << endl;
    }

    for (int i = 3; i <= n; ++i) {
        int next_n = a + b;
        cout << next_n << endl;
        a = b;
        b = next_n;
    }
}

int main() {
    int n;
    cin >> n;
    fib_iterative(n);
    return 0;
}
