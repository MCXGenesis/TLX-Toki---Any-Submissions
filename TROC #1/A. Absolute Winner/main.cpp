#include <iostream>
using namespace std;

int main () {
    int A,B,C,r;
    cin >> A >> B >> C;
    r=(A+B+C)/7;
    if ((A==4*r)or(B==4*r)or(C==4*r)) cout << "YA";
    else cout << "TIDAK";
}
