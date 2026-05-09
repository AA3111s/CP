// Given two integer arrays a and b, the task is to find the numbers which are present in the first array a,
// but not present in the second array b.

// Note: Numbers to be returned should in order as they appear in array a.

// Examples :

// Input: a[] = [1, 2, 3, 4, 5, 10], b[] = [2, 3, 1, 0, 5]
// Output: [4, 10]
// Explanation: 4 and 10 are present in first array, but not in second array.

#include <bits/stdc++.h>
using namespace std;

int N = 10e5;

int main(){
    
    int a[N];
    int b[N];
    int hsh[N];
   
   for(int i = 0; i < N; i++){
       while(!(cin >> a[i]));
   }
   
   for (int i = 0; i < N; i++){
       while(!(cin >> b[i]));
   }
   
   for(int i = 0; i < N; i++){
       hsh[a[i]]++;
       hsh[b[i]]++;
   }
   
   for(int i = 0; i < N; i++){
       if(hsh[i] <= 1){
            cout << i;
       }   
       
   }
}

//code sucks.