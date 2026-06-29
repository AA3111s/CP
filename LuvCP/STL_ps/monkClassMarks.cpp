#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    multimap<int, string> m;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        int marks;
        cin >> marks;
        m[marks] = s;
    }


    // worked before c++17

    // for(auto &pair : m){ 
    //     cout << m.second << " " << m.first << "\n";
    // }
    for (auto& [key, value] : m) {
        cout << value << " " << key << "\n";
    }
}