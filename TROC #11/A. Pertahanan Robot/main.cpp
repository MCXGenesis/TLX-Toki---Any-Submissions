#include <iostream>
using namespace std;

int main () {
    string S;
    int x=0,y=0;
    cin >> S;
    for (char i:S){
        if (i=='R') x++;
        else if (i=='D') y--;
        else if (i=='L') x--;
        else if (i=='U') y++;
        else continue;
    }
    cout << x << " " << y;
}