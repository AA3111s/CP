/*
Given N strings and Q queries.
In each query you are given a string print yes if string is present else print no.
N <= 10^6
|S| <= 100
Q < 10 ^ 6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    unordered_set<string> s;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        s.insert(temp);
    }

    while(q--){
        string temp2;
        cin >> temp2;
        if(s.find(temp2) == s.end() ){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
}