#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int arr[4] = {0};
		for(int i = 0; i < s.size(); i++){
		    if(s[i] == 'r'){
		        arr[0]++;
		    }
		    else if(s[i] == 'u'){
		        arr[1]++;
		    }
		    else if(s[i] == 'b'){
		        arr[2]++;
		    }
		    else if(s[i] == 'y'){
		        arr[3]++;
		    }
        }
		    int minm = std::min({arr[0], arr[1], arr[2], arr[3]});
		    cout << minm << '\n';
	}
}

// technically better than hashing on arr[26] but virtually makes no difference so it's better to 
// use the arr[26] method for better readability and less code.