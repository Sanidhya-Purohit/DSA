#include <iostream>
using namespace std;

class Solution {
public:
    int power(int a, int b ) {
        int intmax= 2147483647;
        int base= a;
        if (b==0) {
            return 1;
        }
        else {
        for ( int i=1; i<b; i++) {
            if(a<intmax/base){
            a*= base;
                 }
            }
            return a;
        }
    }
    int reverse(int x) {
        int intmax= 2147483647;
        int intmin= -2147483648 ;
        if(x>=0) {
            int tempx=x;
            int numdigits{};
            int y{};
           do {
                tempx/=10;
                numdigits++;
            } while (tempx>0);
            while (numdigits>=1) {
                int digit{} ;
                digit=x%10;
                x/=10;
                if ( digit<=intmax/power(10, numdigits-1)&& digit*power(10,numdigits-1)<=intmax-y){
                y=digit*power(10,numdigits-1)+ y;
                numdigits--;
                }
                else { 
                return 0;
                }
            }
            return y;
        }
        else {
            return -1;
        }
    }
    bool isPalindrome(int x) {
        int revx= reverse(x);
if(x==revx&& x!=-1) {
 return true;
    }
        else {
            return false;
        }
    }
};


