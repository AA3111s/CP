#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int counter = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        for(int j = 1; j * j <= temp; j++){
            if(temp % j == 0){
                if(j * j == temp){
                    counter++;
                }
                else counter += 2;
            }
        }
    }
    cout << counter;
}