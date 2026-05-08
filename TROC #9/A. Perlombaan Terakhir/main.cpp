#include <iostream>
using namespace std;

int main () {
    string s;
    cin >> s;
    int c = 0;
    for (char i:s) {
        if (i=='O') c++;
    }
    if (c==1) cout << "Ya";
    else cout << "Tidak";
}