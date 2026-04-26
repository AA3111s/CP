#include <bits/stdc++.h>
using namespace std;

int dominop(int a, int b){
    
    return (a * b)/2;
}

int main(){

    int a, b;
    cin >> a >> b;
    int result = 0;

    result = dominop(a, b);
    cout << result;

}