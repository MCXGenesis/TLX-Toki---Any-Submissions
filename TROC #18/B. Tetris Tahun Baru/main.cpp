#include <iostream>
using namespace std;

int main () {
    int N,a;
    cin >> N;
    if (N==1) cout << 0;
    else {
        a=N*N*4;
        if (N%2==0) cout << a/4;
        else cout << a/4-1;
    }
}