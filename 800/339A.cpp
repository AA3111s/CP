#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    multiset<char> s1;
    
    if(s.size() == 0){
            cout << s;
        }
        
    for(int i = 0; i < s.size(); i=i+2){
        s1.insert(s[i]);
    }
    
    int plus = s1.size() - 1;
    
    for(auto x : s1){
        cout << x;
        if(plus > 0){
            cout << "+";
        } 
        plus--;
    }
}