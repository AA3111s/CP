#include <bits/stdc++.h>
using namespace std;

int nf(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    return nf(n - 1) + nf(n - 2);
}

int main(){
    int n;
    cin >> n;

    nf(n);
}