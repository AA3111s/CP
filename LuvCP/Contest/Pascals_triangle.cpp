#include <bits/stdc++.h>
using namespace std;
const int N = 42;

//optimised version as calculating the pascals' triangle inside the test cases continously would 
//add to the complexity, so here we will build the maximum given sized triangle first and 
//print as much as is asked.

int main(){
    int t;
    cin >> t;
    long long int a[N][N];
        a[0][0] = 1;
        for(int i = 1; i < N; i++){
            a[i][0] = 1;
            a[i][i] = 1;
            for(int j = 1; j < i; j++){
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}