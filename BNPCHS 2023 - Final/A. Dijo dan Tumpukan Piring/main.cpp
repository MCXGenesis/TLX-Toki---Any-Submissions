#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<int> pir(N);
    for (int i=0; i<N; i++){
        cin >> pir[i];
    }
    sort(pir.begin(), pir.end());
    cout << pir[N-1];
    
}
