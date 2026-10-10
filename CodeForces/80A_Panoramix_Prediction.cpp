#include <iostream>
using namespace std;
bool checkprime(int a) {
for (int i=2;i<a;i++) {
    int b= a%i;
    if(b==0) {
    return false;
}
}
    return true;
}
int main() {
int a{} , b{};
 cin>> a >> b;
  if(checkprime(b)==0){
   cout<< "NO";
   return 0;
}
else {
 for (int i=a+1; i<b; i++) {
    bool c=checkprime(i);
    if (c==1) {
    cout << "NO" ;
    return 0;
}

}
cout << "YES";
return 0;
}
}