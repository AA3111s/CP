#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    unordered_map<string, int> m;
    while(t--){
        string s;
        cin >> s;
        
        if(m[s] > 0){
            string temp = to_string(m[s]);
            m[s]++;
            cout << s.append(temp) << "\n";
        }
        else{
            cout << "OK\n";
            m[s]++;
        } 
    }
}