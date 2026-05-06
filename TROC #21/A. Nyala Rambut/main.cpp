#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int N, D;
    cin >> N >> D;
    if (D>N) cout << "YES";
    else if (pow(D,10)>N) cout << "YES";
    else cout << "NO";
}