#include <iostream>
using namespace std;

int main () {
    int A, B, C, x=2;
    cin >> A >> B >> C;
    while ((x%A==0) or (x%B==0) or (x%C==0)){
        x++;
    }
    cout << x;
}