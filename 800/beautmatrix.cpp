#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int position_i = 0, position_j = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i][j] == 1){
                position_i = i;
                position_j = j;
                break;
            }
        }
    }
    if(position_i < 2){
        position_i = abs(position_i - 2);
    }
    else if(position_i > 2){
        position_i = abs(position_i - 2);
    }
    else position_i = 0;

    if(position_j < 2){
        position_j = abs(position_j - 2);
    }
    else if(position_j > 2){
        position_j = abs(position_j - 2);
    }
    else position_j = 0;
    
    cout << position_j + position_i;


}