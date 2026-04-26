// #include <iostream>
// #include <set>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int mex(int n, int a[]) {
//     set<int> s;
//     for(int i = 0; i < n; i++) {
//         if(a[i] != -1) {
//             s.insert(a[i]);
//         }
//     }
    
//     int mex = 0;
//     while(s.find(mex) != s.end()) {
//         mex++;
//     }
    
//     return mex;
// }

// int main() {

//     //input
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int M;
//     for(int i = 1; i < n-2; i++){
//         M = max_element(a[i], a[i]+3) - min_element(a[i], a[i+1], a[i+2]);

//         if(a[i] == -1) {
//             a[i] = 0;
//             while(i <=100){
//                 if(mex(n, a) == M) {
//                     cout << "YES" << endl;
//                     break;
//                 }
//                 a[i]++;
                
//             }
//             cout << "NO" << endl;
            
//         }
//     }
//     return 0;
// }



