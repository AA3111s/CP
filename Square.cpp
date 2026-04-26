#include <bits/stdc++.h>
using namespace std;

string square(int a, int b, int c, int d){
            if ( a == b && b == c && c == d){
                return "true";
            }
            else return "false";
            }

int main() {
    int t;
    cin >> t;
    while(t--){
        
        
        int x, y, z, w;
        cin >> x >> y >> z >> w;
        string answer = square(x, y, z, w);
        if (answer == "true"){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

}
