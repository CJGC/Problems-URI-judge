#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  char O; double M[12][12], add=0.0;
  cin >> O;
  for(int i=0; i<12; i++)
    for(int j=0; j<12; j++) cin>>M[i][j];
  for(int i=1; i<12; i++)
    for(int j=11; j>11-i; j--)
      add += M[i][j];

  if(O == 'S') cout<<fixed<<setprecision(1)<<add<<endl;
  else cout<<fixed<<setprecision(1)<<add/66.0<<endl;
  return 0;
}
