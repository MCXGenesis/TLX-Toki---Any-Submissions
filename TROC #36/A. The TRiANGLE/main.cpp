#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<int> t;
    int a,b,c;
    for (int i=0; i<3; i++){
        cin >> a;
        t.push_back(a);
    }
    sort(t.begin(), t.end());
    b = t[0] + t[1];
    c = t[2];
    if (c<b){
        cout << 0;
        return 0;
    }
    else {    
        cout << c+1-b;
    }   
}