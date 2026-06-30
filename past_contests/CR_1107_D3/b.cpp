#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x;
    if (!(cin >> x)) return;
    
    int m = to_string(x).length();
    long long result = llround(pow(10, m)) + 1;
    
    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}