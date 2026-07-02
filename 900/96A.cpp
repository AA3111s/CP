#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int counter = 0;
    int it = s.size();

    for(int i = 0; i < --it; i++){
        if(s[i] == s[i+1]){
            counter++;
            if(counter == 7){
                cout << "YES";
                break;
            }
        }
    }
    cout << "NO";
}