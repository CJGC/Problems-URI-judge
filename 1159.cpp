#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X, add=0;
  while(cin>>X) {
    if(X == 0) break;
    for(int i=0; i<10; i++,X++){
      if(X%2 == 0) add+=X;
      else if(X<0&&(X*-1)%2==0) add+=X;
    }
    cout<<add<<endl; add=0;
  }
  return 0;
}
