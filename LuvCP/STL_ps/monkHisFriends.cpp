#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        unordered_set<long long> s;

        for(int i = 0; i < n; i++){
            long long temp;
            cin >> temp;
            s.insert(temp);
        }
        
        int size = s.size();
            
        for(int i = 0; i < m; i++){
            long long exists;
            cin >> exists;
            s.insert(exists);
            if(size == s.size()){
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
                size++;
            }
        }
    }
}