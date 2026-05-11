#include <iostream>
using namespace std;

int main () {
    int N,gi=0,bi=0,ki=0,gu=0,bu=0,ku=0,c=0;
    string si,su;
    cin >> N >> si >> su;
    for (int i=0; i<N; i++) {
        if (si[i] == 'G') gi++;
        if (su[i] == 'G') gu++;
        if (si[i] == 'B') bi++;
        if (su[i] == 'B') bu++;
        if (si[i] == 'K') ki++;
        if (su[i] == 'K') ku++;
    }
    // for (int i=0; i<N; i++) {
        // if ((ku >= gi)and(gi!=0)) c++;
        // if ((gu >= bi)and(bi!=0)) c++;
        // if ((bu >= ki)and(ki!=0)) c++;
        c += min(gi, ku);
        c += min(bi, gu);
        c += min(ki, bu);
    // }
    cout << c;
}