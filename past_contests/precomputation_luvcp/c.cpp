#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main(){
    int n;
    cin >> n;
    int hsh[N] = {0};

    for(int i = 0; i < n; i++){
        cin >> hsh[i];
    }

    int q;
    cin >> q;
    while(q--){
        int i, price;
        cin >> i >> price;
        int req = price - hsh[i];
        if(req == 0){
            cout << "0\n";
        }
        else if(hsh[req] > 0){
            cout << hsh[req] << "\n";
        } else cout << "-1";
    }
}