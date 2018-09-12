#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,X,Y,add=0; cin>> N;
  for(int i=0; i<N; i++){
    cin >> X >> Y;
    for(int j=1; j<=Y*2; j++,X++){
      if(X < 0 && (X*-1)%2 == 1) add+=X;
      else if(X%2 == 1) add += X;
    }
    cout << add <<endl;
    add = 0;
  }
  return 0;
}
