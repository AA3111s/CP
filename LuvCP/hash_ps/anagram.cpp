// #include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    int hsh[27] = {0};
    cin >> s >> t;
    
    if(s.size() != t.size()){
        cout << "false\n";
        return 0;
    }

    for(int i = 0; i < s.size(); i++){
        hsh[s[i] - 'a']++;
    }
    for(int i = 0; i < t.size(); i++){
        hsh[t[i] - 'a']--;
    }

    for(int i = 0; i < 27; i++){
        if(hsh[i] != 0){
            cout << "false\n";
            return 0;
        }
    }
    cout << "true\n";
}

//this solution was for a leetcode problem called anagram but the platform won't accept the answer as they 
//input the strings with the double quotation marks which i would need to strip to get the correct answer
//but since i'm to follow the course and use only what it has taught me, i can't just do that yet.
//the solution and logic is correct though.