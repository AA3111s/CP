#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n]; // vector<int> a(n):

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n); // sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";

    int *ptr = lower_bound(a, a+n, 5); //int *ptr = upper_bound(a, a+n, 5);
    // int auto it = lower_bound(a.begin(), a.end(), 5);

    if(ptr == (a+n)){ //if(it == a.end())
        cout << "Not found";
        return;
    }
    cout << (*ptr) << "\n";
}

/*
sample input

6 
4
5
5
25
7
8

output 

4 5 5 7 8 25
5 (upper bound: 7)
*/