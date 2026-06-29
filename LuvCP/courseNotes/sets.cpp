/*
Given N strings, print unique strings in lexiographical order
N <= 10^5
|S| < 100000 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    set<string> s;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        s.insert(temp);
    }
    for(auto value : s){
        cout << value << "\n";
    }
}