#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count = 0;
	
	for( int i = 2; i < n / 2; i++){
	    if (n % i == 0){
	        count++;
	    }
	}
	cout << count;
}


//logic:

// therefore, 2(l+b) = P; which means l+b = p/2 
// in another words we can simplify the problem into dividing the number into 2 parts, a and b 
// these can be equal but need to be smaller than n/2 as if a or b becomes n/2 then these two parts 
// themselves would contitute the complete perimeter length so division in 4 parts would not be possible