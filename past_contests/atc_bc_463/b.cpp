#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int main(){
    int S[N][5];
    int n;
    cin >> n;

    char x;
    cin >> x;
    int y = (x - 'a');

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 5; j++){
            cin >> S[i][j];
            if(j == y && S[i][j] == 'o'){
                cout << "Yes\n";
                return 0;
            }
        }
    }
cout << "No\n";
}