#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    
    int key, door;
    int hsh[9];
    
    for(int i = 0; i < m; i++){
        cin >> key >> door;
        hsh[door]++;
    }
    
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        hsh[temp]--;
        if(hsh[temp] < 0){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}