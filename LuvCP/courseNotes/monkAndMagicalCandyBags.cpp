#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        long long k;
        cin >> n >> k;
        multiset<long long> m;

        for(int i = 0; i < n; i++){
            long long candy;
            cin >> candy;
            m.insert(candy);
        }

        long long candyc = 0;

        for(int i = 0; i < k; i++){
            auto it = (--m.end());
            long long largestC = *it;
            candyc += largestC;
            m.erase(it);
            m.insert(largestC / 2);
        }
    cout << candyc << "\n";
    }
}