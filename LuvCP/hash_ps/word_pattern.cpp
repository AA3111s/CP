#include <bits/stdc++.h>
using namespace std;

int main(){
    string pattern;
    string s;
    cin >> pattern >> s;

   if(pattern.size() != s.size()){
        return false;
   }
   string hsh1[27];
   string hsh2[3001];

   for(int i = 0; i < pattern.size(); i++){
     hsh1[pattern[i]] = s[i];
     hsh2[s[i]] = pattern[i];
   }
}