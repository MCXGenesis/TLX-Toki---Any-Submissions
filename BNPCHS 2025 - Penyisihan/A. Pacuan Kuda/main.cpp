#include <iostream>
#include <climits>
using namespace std;

int main () {
    double N, v, d, f=INT_MAX, res=0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> d >> v;
        if (v/d < f) {
            f = v/d;
            res = i;
        }
        
    }
    cout << res;
}