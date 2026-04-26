#include <bits/stdc++.h>
using namespace std;

int main(){
    const int MAXR = 100;
    int n = 0;
    
    for(int i = 0; i < MAXR; i++){
        int c;
        cin >> c;
        n += c;
    }
    
    cout << n << endl;
    
    return 0;
}


