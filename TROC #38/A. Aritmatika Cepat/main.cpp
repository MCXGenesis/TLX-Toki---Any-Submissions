#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int A,B,G,H,I,Q,S;
    cin >> A >> B >> G >> H >> I >> Q >> S;
    B=abs(B);
    G=abs(G);
    H=abs(H);
    I=abs(I);
    Q=abs(Q);
    S=abs(S);
    cout << A+B+G+H+I+Q+S;
}