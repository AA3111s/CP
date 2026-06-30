#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        
        if(x < y){
            cout << "No\n";
        }
        else if(x % y != 0){
            cout << "Yes\n";
        }
    }
}