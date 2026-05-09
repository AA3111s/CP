#include <bits/stdc++.h>
using namespace std;

int const N = 27;
int a[N];

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        a[N] = {0};
        for(int i = 0; i < s.size(); i++){
            a[s[i] - 'a']++;
        }

        int counter = 0;

        for (int i = 0; i < N; i++){
            if(a[i] >= 2 && a[i] != 0){
                counter++;
            }
        }
        if(counter >= 1){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
        for(int i = 0; i < N; i++){
            a[i] = 0;
        }
    }     
}

