#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int a,b;
    cin >> a >> b;
    vector<int> t = {a,b};
    sort(t.begin(),t.end());
    if (t[1]>12) {
        cout << "NO";
        return 0;
    }
    else cout << "YES";
}