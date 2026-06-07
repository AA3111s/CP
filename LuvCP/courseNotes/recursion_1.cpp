#include <bits/stdc++.h>
using namespace std;

// function to output the numbers (5, 4, ...)

void func1(int n){
    if(n == 0) return;
    cout << n << '\n';
    func1(n-1);
}

// function to output the numbers (1, 2, ...)

void func2(int n){
    if(n == 0) return;
    func2(n-1);
    cout << n << '\n';
}

//function for factorial 

int fact(int n){
    if(n == 0) return 1;
    return fact(n - 1) * n << '\n';
}

//function for array sum

// int sum(int n, a){
//     if(n < 0) return 0;
//     sum(n, a) = a[n] + sum(n - 1, a);
// }

// function for digit sum

int ds(int n){
    if(n == 0) return 0;
    return ds((n / 10) + (n % 10));
}

int main(){

    func1(5);
    func2(5);
    cout << fact(5);
    cout << ds(5);
}