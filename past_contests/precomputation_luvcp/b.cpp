#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

int main(){
    int m, n;
    cin >> m >> n;
    int pf[N][N] = {0};

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            int temp;
            cin >> temp;

            int value = (temp % 2 != 0) ? 1 : 0;

            pf[i][j] = value + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    while(q--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        cout << pf[l2][r2] - pf[l1-1][r2] - pf[l2][r1-1] + pf[l1-1][r1-1] << "\n";
    }
}