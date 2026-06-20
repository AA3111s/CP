#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x, y;

    int a = 0;
    a = gcd(x, y);
    if(
        x / a == 16 && y / a == 9
    ){
        cout << "Yes\n";
    }
    else cout << "No\n";
}