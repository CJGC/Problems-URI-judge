#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X,Y,begin,end,odd_add=0 ;cin >> X >> Y;
  if(X < Y){begin = X+1; end = Y;}
  else{begin = Y+1; end = X;}
  for(begin; begin<end; begin++) if(begin % 2 != 0) odd_add+=begin;
  cout << odd_add << endl;
  return 0;
}
