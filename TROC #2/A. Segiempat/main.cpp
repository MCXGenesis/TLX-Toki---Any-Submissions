#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int d1 = ((n/a)*(m/b));
    int d2 = ((n/b)*(m/a));
    cout << max(d1,d2);
}