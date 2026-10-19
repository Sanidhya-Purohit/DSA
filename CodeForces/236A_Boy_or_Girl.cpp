#include <iostream>
#include <vector>
#include <string>
using namespace std;
void remduplicates(vector<char>&arr) {
        for (int j=1; j<arr.size();j++) {
            for (int l=0;l<j;l++) {
            if (arr[j]==arr[l]) {
             arr.erase(arr.begin()+j);
            j--;
            }
            }
        }
}

int main () {
string s;
cin >> s;
vector<char> arr;
for ( int j=0;j<s.size() ;j++) {
     arr.push_back(s[j]);
}
remduplicates(arr) ;
if (arr.size()%2==0) {
    cout << "CHAT WITH HER!";
}
else {
    cout << "IGNORE HIM!";
}
return 0;
}