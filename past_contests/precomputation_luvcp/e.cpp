#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int hsh[28] = {0};

    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            char temp;
            cin >> temp;
            hsh[temp]++;
        }
        int evens = 0;
        int odds = 0;
        for(int i = 0; i < 27; i++){
            if(hsh[i] % 2 == 0){
                evens++;
            } else odds++;
        }
        cout << (odds > 1) ? evens+1 : evens;
    }
}