#include <iostream>
using namespace std;

int main(){
    int p, q;
    cin >> p >> q;
    int sum = p*p+q*q+1;
    if (sum % 4 == 0) {
        cout <<  sum/4;
    } else {
        cout << -1;
    }
}