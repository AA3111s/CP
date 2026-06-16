#include <iostream>
using namespace std;
#define ll long long

bool solve(ll n, ll a, ll b) {
    if (a > n || b > n) return false;
    
    for (ll x = 1; x <= n - a + 1; x++) {
        for (ll y = 1; y <= n - b + 1; y++) {
            bool symmetric = true;
            
            for (ll i = 1; i <= n; i++) {
                ll mirror = n + 1 - i;
            
                bool is_red = (i >= x && i < x + a);
                bool mirror_red = (mirror >= x && mirror < x + a);
                
                bool is_blue = (i >= y && i < y + b);
                bool mirror_blue = (mirror >= y && mirror < y + b);
                
                if (is_blue) is_red = false;
                if (mirror_blue) mirror_red = false;
                
                if (is_red != mirror_red || is_blue != mirror_blue) {
                    symmetric = false;
                    break;
                }
            }
            
            if (symmetric) return true;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        
        cout << (solve(n, a, b) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}