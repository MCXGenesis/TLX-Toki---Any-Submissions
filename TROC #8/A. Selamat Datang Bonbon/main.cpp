#include <iostream>
using namespace std;

int main () {
    long long X,Y,Z;
    cin >> X >> Y >> Z;
    X=X*(100-Y)/100;
    X=X*(100+Z)/100;
    cout << X;
}