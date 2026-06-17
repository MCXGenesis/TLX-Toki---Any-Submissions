#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    long long N;
    int c=0;
    cin >> N;
    for (int i=1; ((i*9)+(i+9))<=N; i++) {
        c++;
        if (c>=9) break;
    }
    cout << c;
}