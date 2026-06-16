#include <bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
  public:
    int countWords(vector<string> &list) {
        // code here.
        int N = 1e4
        int counter = 0;
        for(auto &value : list){
            int a[N];
            a[list[value]]++;
            if(list[value] >= 2) counter++;
        }
        cout << counter;
    }
};
}