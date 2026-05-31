// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <bits/stdc++.h>
using namespace std;

int N = 6 * 1e4 + 5;

int main(){

    int n;
    int hsh[N] = {0};
    int max = 0;
    int min = N - 1;
    while(cin >> n){
        n = n + 3 * 1e4;
        hsh[n]++;
        if(max < n){
            max = n;
        }
        if (min > n){
            min = n;
        }
    }

    for(int i = min; i <= max; i++){
        if(hsh[i] > 1 || hsh[i] == 0) continue;
        else cout << i - (3 * 1e4) << "\n";
        return 0;
    }
    
}