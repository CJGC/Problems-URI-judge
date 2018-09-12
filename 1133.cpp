#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X,Y,value1,value2; cin >> value1 >> value2;
  if(value1 < value2){ X = value1+1 ; Y = value2;}
  else{X = value2+1 ; Y = value1;}
  for (X; X<Y; X++) if(X%5 == 2 || X%5 == 3) cout<<X<<endl ;
  return 0;
}
