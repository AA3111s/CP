#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 2 * 1e5 + 10;

int main(){
    int n;
    cin >> n;
    int hsh[N] = {0};
    int hsh2[M] = {0};

    for(int i = 1; i <= n; i++){
        cin >> hsh[i];
        hsh2[hsh[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int i, price;
        cin >> i >> price;
        int req = price - hsh[i];
        
        if(hsh[i] == price){
            cout << "0\n";
            continue;
        }
        
        int ans = 0;
        
        if(req > 0 && req < M){
            ans += hsh2[req];
            if(hsh[i] == req) {
            ans--;
            }
        }
        
        if(price > 0 && price < M) {
            ans += hsh2[price];
        }
        
        if(ans > 0){
            cout << ans << "\n";
        } else {
            cout << "-1\n";
        }
    }
}


/*
sample test cases:

6
1 3 3 6 4 6
4
1 4
4 3
4 6
1 2


req output:
3
2
0
-1

*/