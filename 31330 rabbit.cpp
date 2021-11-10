#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  int t=0;
  for(int i=0 ; int d=1 ; i=a*t){
    d = 0 ;
    if(c-i>=0){
      cout<<"N";
      break;
    }if((c-i)% b == 0){
      d = 1;
      cout << "Y";
      break;
    }if(c<i){
      cout <<"N";
      break;
    } else {
      t = t + 1;
    }
  }
}