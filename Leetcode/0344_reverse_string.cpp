#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int k= s.size();
        char left=s[0], temp=left, right=s[k-1];
        for (int i=0; i<k/2; i++) {
            left=s[i];
            right=s[k-1-i];
            temp= left;
                left=right;
            right =temp;
            s[i]=left;
            s[k-1-i]=right;
        }
    }
};