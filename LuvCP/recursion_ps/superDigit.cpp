#include <bits/stdc++.h>
using namespace std;

int sd(long long p){
    return sd((p / 10) + (p % 10));
}

int main(){

    string n;
    int k;
    cin >> n >> k;

    long long temp = 0;
    for(int i = 0; i < n.size(); i++){
        temp += int(n[i]);
    }
    temp = temp * k;
    sd(temp);
}

// this could be solved in O(1) using Digital Root Formula