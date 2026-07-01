#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

int main(){
    int m, n;
    cin >> m >> n;
    
    int arr[N][N];
    int pf[N][N] = {0};
    
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
            if(arr[i][j] % 2 == 0){}
            else {
                pf[i][j] = pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1] + arr[i][j];
            }
        }
    }
    
    int q;
    cin >> q;
    while(q--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        cout << pf[l2][r2] - pf[l1-1][r2] - pf[l2][r2-1] + pf[l1-1][r2-1] << "\n";
    }
    
}

/*
3 3
1 1 1 
1 2 1
1 1 1
4
1 1 3 3
1 2 1 2
2 2 3 3
2 2 2 2
*/