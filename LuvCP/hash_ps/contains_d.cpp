// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.

#include <bits/stdc++.h>
using namespace std;

int N = 10e5;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int hsh[N] = {0};
    
   while(cin >> n){
       if(hsh[n] > 0){
           cout << "true\n";
           return 0;
       }
       hsh[n]++;
   }
   cout << "false\n";
    
}

//works on sample testcases, but can't submit on leetcoode as input again contains square brackets and commas
//stripping which i've not yet learnt in this course so can't use it here, but the logic is correct and works on sample testcases