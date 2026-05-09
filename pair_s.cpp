// #include <bits/stdc++.h>
// using namespace std;

// int main(){
    
//     int n;
//     long long k;
//     cin >> n >> k;
//     int a[n];
//     int flag = 0;
    
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i < n - 1; i++){
//         if(a[i] + a[i+1] == k){
//             flag = 1;
//             break;
//         }
//     } 
//     if(flag == 1){
//         cout << "YES\n";
//     }
//     else cout << "NO\n";
    
// }

// partially accepted as the two numbers can be non-consecutive as well.


//actual complete solution using hash map

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, arr[(int) 1e6 + 10] = {0};
    cin >> n >> k;
    int list[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> list[i];
        arr[list[i]]++;
    }
    for (int i = 0; i < n; i++) {
        int x = k - list[i];
            if (x > 0 && x <= 1000000) {
                if (x != k - x) {
                    if (arr[x] >= 1) {
                        cout << "YES";
                        return 0;
                    }
                }
                else if (arr[x] >= 2) {
                    cout << "YES";
                    return 0;
                }
            }
    }
    cout << "NO";
    return 0;
}