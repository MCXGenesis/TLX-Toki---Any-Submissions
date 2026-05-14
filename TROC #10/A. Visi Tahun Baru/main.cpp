#include <iostream>
#include <ctype.h>
using namespace std;

int main () {
    string S,T;
    cin >> S >> T;
    for (int i=0; i<S.size(); i++){
        if (tolower(S[i]) != tolower(T[i])) {
            cout << "x_x";
            return 0;
        }
    }
    cout << "20/20";
}