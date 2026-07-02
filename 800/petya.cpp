#include <bits/stdc++.h>
using namespace std;

int main(){

    string a, b;
    cin >> a >> b;

    int value1 = 0;
    int value2 = 0;

    for(int i = 0; i < a.size(); i++){
        value1 += tolower(a[i]);
        value2 += tolower(b[i]);

       if(value1 < value2){
            cout << "-1\n";
            break;
        }
        else if(value1 > value2){
            cout << "1\n";
            break;
        }
    } 
    if(value1 == value2){
        cout << "0\n";
    }
}