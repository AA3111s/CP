/*
Given N strings, print unique strings in lexiographical order with their frequency
N <= 10^5
| S | <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> m;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    for(auto pr : m){
        cout << m.first << " " << m.second << "\n";
    }
}
