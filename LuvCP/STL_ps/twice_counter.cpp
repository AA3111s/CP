#include <bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
  public:
    int countWords(vector<string> &list) {
        // code here.
        unordered_map<string, int> m;

        for(const string &word x : list){
            m[word]++;
        }

        int counter = 0;

        for(auto const &pair : m){
            if(pair.second == 2){
                counter++;
            }
        }
        return counter;
    }
};
}