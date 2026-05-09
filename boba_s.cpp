#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){

        string s, u;
        cin >> s >> u;
        
        int hsh[27] = {0};

        for(int i = 0; i < s.size(); i++){
            hsh[s[i] - 'a']++;
        }

        for(int i = 0; i < u.size(); i++){
            hsh[u[i] - 'a']--;
        }

        int sum  = 0;

        for(int i = 0; i < 27; i++){
            if(hsh[i] != 0){
                sum += abs(hsh[i]);
            }
        }

        cout << sum << endl;
    }
}

//accepted on hackerearth, all testcases passed.