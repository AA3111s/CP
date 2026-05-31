#include <bits/stdc++.h>
using namespace std;

int lever(int n, int a[], int b[]){
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])
            count += a[i] - b[i];
    }
    return count+1;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[15], b[15];

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        cout << lever(n, a, b) << endl;
    }
}