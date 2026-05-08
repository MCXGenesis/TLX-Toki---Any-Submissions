#include <iostream>
using namespace std;

int main () {
    int N,c=1;
    cin >> N;
    for (int i = 1; i <= N/2; i++)
    {
        if (N%i==0)
        {
            c++;
            // cout << c;
        }
        else continue;
    }
    // if (N%2==0) c++;
    if (c==5) cout << "YES";
    else cout << "NO";
}