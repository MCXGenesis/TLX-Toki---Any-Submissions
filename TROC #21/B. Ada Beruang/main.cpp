#include <iostream>
using namespace std;

int main () {
    int N, D, a, c, j;
    c = 0;
    j = 1;
    cin >> N >> D;
    int arr [N];
    for (int i=0; i<N; i++){
        cin >> a;
        arr[i] = a;
    }
    for (int i=0; i<N; i++){
        a = arr[i] + D;
        while (j<N) {
            if (a > arr[j]){
                j++;
                continue;
            }
            if (a < arr[j]){
                break;
            }
            else {c++; j++;}
        }
    }

    // for (int i=0; i<N; i++){
    //     for (int j=i; j<N; j++){
    //         if (brr[i]==arr[j]){
    //             c++;
    //         }
    //     }
    // }
    cout << c;
}