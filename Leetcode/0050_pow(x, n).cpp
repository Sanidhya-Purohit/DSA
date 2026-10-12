#include <iostream>
class Solution {
public:
    double myPow(double x, int n) {
        double z=1/x;
        double base= x;
        double base2=z;
        if (n==0||x==1) {
            return 1;
        }
        else if(x==-1) {
            if (n%2==0){
                return 1;
            }
            else {
                return -1;
            }
        }
        
        else if (n>0) {
        long tempn=n;
        double tempx=1;
        while (tempn>0){
            if(tempn%2==1){
            tempx*= base;
            }
            tempn/=2;
                base*=base;
        }
            return tempx;
        }
        else {
            long tempn=n;
            tempn=-tempn;
        double tempx=1;
        while (tempn>0){
            if(tempn%2==1){
            tempx*= base;
            }
            tempn/=2;
                base*=base;
        }
            return 1/tempx;
        }
    }
};