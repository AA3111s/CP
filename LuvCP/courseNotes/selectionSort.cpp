#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     
    for(int i = 0; i < n; i++){
        // setting the first element to be the smallest
        int minmIndex = i;
        for(int j = i + 1; j < n; i++){
            // finding the next smallest element
            if(arr[j] < arr[minmIndex]){
                // setting the new found smallest element index to minm index var
                minmIndex = j;
            }
        }
        // swapping the position of minimum element with 0 and so on...
        swap(arr[i], arr[minmIndex]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
}