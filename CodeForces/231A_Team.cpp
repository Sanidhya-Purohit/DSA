#include <iostream>
using namespace std;
int main() {
    int arr[3001];
    int n{};
    int sum{};
    int k{};
    cin >> n;
    arr[0]=n;
    for ( int i=1; i<=3*n;i++) {
     cin >> arr[i];
     }
    for ( int i=1;i<=3*n-1;i+=3) {
    sum = 0;
    sum = arr[i] + arr[i+1] + arr[i+2];
    if ( sum>=2 ) {
        k++;
        }
     }
    cout << k;
}