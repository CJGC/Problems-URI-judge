#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int L; char T; double M[12][12], add=0.0;
  cin >> L >> T;
  for(int i=0; i<12; i++)
    for(int j=0; j<12; j++) cin>>M[i][j];
  for(int j=0; j<12; j++) add += M[L][j];
  if(T == 'S') cout<<fixed<<setprecision(1)<<add<<endl;
  else cout<<fixed<<setprecision(1)<<add/12.0<<endl;
  return 0;
}
