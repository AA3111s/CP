#include <iostream>

using namespace std;

int team( int n){
    int j = 0;
    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b + c >= 2){
            j++;
        }
    }
    return j;
}

int main(){
    int n;
    cin >> n;
    if (n < 1 || n > 1000){
        return 1;
    }
    cout << team(n) << endl;
    return 0;
}