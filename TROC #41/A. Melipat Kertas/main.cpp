#include <iostream>
using namespace std;

int main () {
    int l, w, a;
    // string res;
    cin >> l >> w >> a;
    double luas = l*w;
    while (luas > a) {
        luas /= 2;
    }
    if (luas == a) cout << "YA";
    else cout << "TIDAK";
}