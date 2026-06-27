#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if(n % 2 != b % 2){
            cout << "NO\n";
        }
        else if(a > b && (a % 2 != b %2)){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}