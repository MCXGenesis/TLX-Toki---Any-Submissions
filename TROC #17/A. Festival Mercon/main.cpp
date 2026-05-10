#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int N,a;
    long long s=0;
    cin >> N;
    int arr[N], brr[N];
    for (int i=0; i<N; i++){
        cin >> a;
        arr[i] = a;
    }
    for (int i=0; i<N; i++){
        cin >> a;
        brr[i] = a;
    }
    for (int i=0; i<N; i++){
        s += arr[i];
    }
    // for (int i=0; i<N; i++){
    //     s += pow(arr[i], brr[i]);
    // }
    if (s%2==0) cout << "0";
    else cout << "1";
}