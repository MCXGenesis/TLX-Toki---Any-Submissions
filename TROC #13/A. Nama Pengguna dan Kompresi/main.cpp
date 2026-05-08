#include <iostream>
using namespace std;

int main () {
    int N;
    string S;
    cin >> N >> S;
    for (int i=S.size(); i>0; i--) {
        if (S[i] == S[i-1]){
            S.erase(i-1,1);
        }
        else continue;
    }
    cout << S;
}