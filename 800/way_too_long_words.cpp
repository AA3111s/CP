#include <iostream>
#include <string>
using namespace std;

string way_too_long_words(string word){
    if(word.length() > 10){
        return word[0] + to_string(word.length() - 2) + word[word.length() - 1];
    }
    return word;
}

int main(){
    int c;
    cin >> c;
    if (c < 1 || c > 100){
        cout << "Number of words must be between 1 and 100." << endl;
        return 1;
    }
    for(int i = 0; i < c; i++){
        string word;
        cin >> word;
        cout << way_too_long_words(word) << endl;
    }
    return 0;
}
