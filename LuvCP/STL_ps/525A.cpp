//optimised solution

// best solution uses a simple hash table [26];
#include <bits/stdc++.h>
using namespace std;


int vit(int n, string &s){

    unordered_map<char, int> m;
    int counter = 0;

    for(int i = 0; i < (2*n-3); i += 2){
        m[s[i]]++;
        char door = tolower(s[i+1]);
        if(m[door] > 0){
            m[door]--;
        }
        else counter++;
    }
    return counter;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int rkeys = vit(n, s);
    cout << rkeys;
}



