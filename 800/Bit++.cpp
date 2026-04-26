#include <bits/stdc++.h>
using namespace std;

int bit(int n, std::string s){
    int c = 0;
        if( s == "++X"){
            c++;
        }
        else if( s == "--X"){
            c--;
        }
        else if( s == "X++"){
            c++;
        }
        else if( s == "X--"){
            c--;
        }
        else return 1;
    return c;
}

int main(){
    int n;
    cin >> n;
    if (n < 1 || n > 150){
        return 1;
    }
    int result = 0;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        result += bit(n, s);
    }
    cout << result << endl;
    return 0;
}