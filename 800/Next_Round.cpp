#include <iostream>
using namespace std;

int n_round(int n, int k, int a[]){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] >= a[k] && a[i] > 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cout << n_round(n, k, a) << endl;
    return 0;
}



