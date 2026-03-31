#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    long long N, x;
    vector<int> arr;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        arr.push_back(i);
    }

    cout << arr[N-1] - arr[0];

}