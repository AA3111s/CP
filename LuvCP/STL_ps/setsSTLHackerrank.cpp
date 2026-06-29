#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    set<int> s;
    while(q--){
        int n, x;
        cin >> n >> x;

        if(n == 1){
            s.insert(x);
        }
        else if( n == 2){
            if(s.find(x) != s.end()){
                s.erase(x);
            }
        }
        else if( n == 3){
            if(s.find(x) != s.end()){
                cout << "Yes\n";
            } else cout << "No\n";
        }
    }
}