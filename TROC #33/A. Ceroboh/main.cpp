#include <iostream>
using namespace std;

int main () {
    // int nmax=20*1/2, mmax=15*2/2;
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    N -= X;
    M -= Y;
    if ((N+(M*2))>25) cout << "LOLOS";
    else if ((N+(M*2))<=25) cout << "TIDAK LOLOS";
}