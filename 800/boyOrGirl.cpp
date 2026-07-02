#include <bits/stdc++.h>
using namespace std;

int main(){

    set<char> s;
    
    string s2;
    cin >> s2;
    for(int i = 0; i < s2.size(); i++){
        s.insert(s2[i]);
    }
    
    if(s.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else cout << "IGNORE HIM!";
}