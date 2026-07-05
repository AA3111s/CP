#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main(){
    int n, k;
    cin >> n >> k;
    
    int hsh[N] = {0};
    int hsh2[N] = {0};
    
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        hsh2[temp]++;
    }
    
    int counter = 0;
    
    for(int i = 0; i < N; i++){
        if(hsh2[i] > k){
            counter++;
        }
    }
    
    cout << counter;
}



/*
sample test case
10 2
23 5 1 23 8 1 1 23 86 75

expected output 
2
*/
