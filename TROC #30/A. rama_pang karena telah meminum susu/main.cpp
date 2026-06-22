#include <iostream>
using namespace std;

int main () {
    int N,x,y,ns,c;
    cin >> N >> x >> y;
    // N uang
    // X botol dalam bungkus
    // Y harga
    ns = (N/y)*x;
    c = N%y;
    ns = ns + c;
    if (ns > N) cout << ns;
    else cout << N;
}
    
