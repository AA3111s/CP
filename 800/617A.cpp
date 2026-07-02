#include <bits/stdc++.h>
using namespace std;

int main(){
        
    int x;
    cin >> x;
    
    int counter = 0;
    
    while(x != 0){
    if(x / 5 > 0){
        x = x-5;
        counter++;
    }
    else if(x / 4 > 0){
        x = x-4;
        counter++;
    }
    else if(x / 3 > 0){
        x = x-3;
        counter++;
    }
    else if(x / 2 > 0){
        x = x-2;
        counter++;
    }
    else {
        x = x-1;
        counter ++;
    }
}
    cout << counter;
}