#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, multiset<string>> marks_map;

    for(int i = 0; i < n; i++){
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }

    auto cur_it = --marks_map.end();
    
    while(true){
        auto &students = (*cur_it).second;
        auto &marks = (*cur_it).first;
        for(auto &student : students){
            cout << student << " " << marks << "\n";
        }
        if(cur_it == marks_map.begin()) break;
        cur_it--;
    }
}

// alternate loop
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     map<int, multiset<string>> marks_map;

//     for(int i = 0; i < n; i++){
//         int marks;
//         string name;
//         cin >> name >> marks;
//         marks_map[-1*marks].insert(name);
//     }

    // storing marks as negative will result in the highest to be stored at the top and hence a normal loop can be run
    // just while outputting multiply by negative 1

//     for(auto &students_marks_pr : marks_map){
//         auto &students = students_marks_pr.second;
//         auto &marks = students_marks_pr.first;
//         for(auto student : students){
//             cout << student << " " << -1*marks << "\n";
//         }
//     }
// }