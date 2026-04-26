#include <iostream>
using namespace std;

string watermelon(int weight){
    if (weight % 2 == 0 && weight > 2){
        return "YES";
    }
    return "NO";
}
int main()
{
    int weight;
    cin >> weight;
    if (weight < 1 || weight > 100) {
        cout << "Weight must be between 1 and 100." << endl;
        return 1;
    }
    cout << watermelon(weight) << endl;
    return 0;
}

