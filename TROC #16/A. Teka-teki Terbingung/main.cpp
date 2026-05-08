#include <iostream>
using namespace std;

int main () {
    int N, a, b;
    a = 1;
    cin >> N;
    for (int i=1; i*i<=N; i++) {
        if (i*i == N) {cout << i << " " << i; return 0;}
        if ((i*i <= N) and (N<=3)) {cout << N << " " << i; return 0;}
        else a = i-1;
    }
    b = N/a;
    if (a*b != N) cout << 1 << " " << N;
    else cout << a << " " << b;
    return 0;
}