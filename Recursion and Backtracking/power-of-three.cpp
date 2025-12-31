#include <bits/stdc++.h>
using namespace std;

bool recursive(int n) {
    if (n < 1) return false;
    if (n == 1) return true;
    if (n % 3 != 0) return false;
    return recursive(n / 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (recursive(n)) cout << "true";
    else cout << "false";

    return 0;
}