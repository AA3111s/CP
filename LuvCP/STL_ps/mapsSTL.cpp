//hackerrank

#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    map<string, int> m;
    while(q--){
    
    int type;
    cin >> type;
    
        string x;
        cin >> x;
        int y;
       
        if(type == 1){
            cin >> y;
            m[x] += y;
        }
        else if(type == 2){
            m[x] = 0;
        }
        else if(type == 3){
            cout << m[x] << "\n";
        }
    }
}

