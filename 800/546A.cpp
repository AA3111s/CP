#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;

    int tcost = 0;

    for(int i = 1; i <= w; i++){
        tcost += i*k;
    }
    
    if(tcost > n){
        int req = abs(n - tcost);
        cout << req;
    }
    else cout << "0";
}