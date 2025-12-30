#include <bits/stdc++.h>
using namespace std;
 
#ifdef LOCAL
#include "F:\cp\debug.h"
#else
#define dbg(...)
#endif

void runcase([[maybe_unused]] const int &tc) {
    int a, b;
    cin >> a >> b;
    auto ans = 0;
    for (int i = a; i <= b; ++i) {
        int x = i % 10;
        if (x == 2 or x == 3 or x == 9) ++ans;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        runcase(tc);
    }
 
    return 0;
}