// Given an array of integers arr[]  and a number k. 
// Return the maximum sum of a subarray of size k.

// Note: A subarray is a contiguous part of any given array.

// Examples:

// Input: arr[] = [100, 200, 300, 400], k = 2
// Output: 700
// Explanation: arr2 + arr3 = 700, which is maximum.




#include <bits/stdc++.h>
using namespace std;

int N = 1e6;

int main(){
    
    int k;
    int a[N];
    int prefix_sum[N];

    for(int i = 1; i <= N; i++){
        cin >> a[i];
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
    cin  >> k;
    int max_sum = 0;
    for(int i = 0; i < k; i++){
        if(max_sum < prefix_sum[k-i] - prefix_sum[i]){
            max_sum = prefix_sum[k-i] - prefix_sum[i];
        }
    }
    cout << max_sum << "\n";
}

// code sucks, can't do it with the contraints i've.