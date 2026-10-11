#include <iostream>
using namespace std;
bool check(int target, int arr[],int size) {
    for (int i=0; i< size; i++) {
      if ( arr[i]==target) {
      return true;
      }
     }
     return false;
}
int main() {
    int n{}, p{}, q{};
    int arrp[100];
    int arrq[100];
    int resultp, resultq;
    cin >> n ;
    cin >> p;
    for ( int i=0; i<p;i++) {
     cin >> arrp[i] ;
     }
    cin >> q;
    for ( int i=0; i<q; i++) {
    cin >> arrq[i];
    }
    for (int i=1; i<=n ; i++) {
    resultp= check(i, arrp, p) ;
    if (resultp==false) {
       resultq= check(i, arrq, q) ;
          if (resultq==false) {
            cout << "Oh, my keyboard!";
            return 0;
           }
       }
    }
    cout << " I become the guy.";
    return 0;
}