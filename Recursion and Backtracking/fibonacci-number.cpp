#include <bits/stdc++.h>
using namespace std;

int fib (int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int res = fib(n);
    cout << res << '\n';

    return 0;
}