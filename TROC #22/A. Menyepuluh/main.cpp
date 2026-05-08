#include <iostream>
using namespace std;

int main () {
    string N;
    cin >> N;
    for (char i : N) {
        if (i=='0'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}