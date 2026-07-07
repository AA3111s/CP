#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> a, pair <int, int> b){
    if(a.first != b.first){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), comp);
    for(int i = 0; i < n; i++){
        cout << a[i].first << " " << a[i].second;
    }
    cout << "\n";
}

/*
sample input
6
4 3
5 5
5 3
25 6
7 9
8 5

output

4 3
5 5
5 3
7 9
8 5
25 6
*/