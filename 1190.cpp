#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  char O; double M[12][12], add=0.0;
  cin >> O;
  for(int i=0; i<12; i++)
    for(int j=0; j<12; j++) cin>>M[i][j];
  for(int i=1,begin_j=12; i<=10; i++){
    if(i <= 5) begin_j--;
    else if(i >= 7) begin_j++;
    for(int j=begin_j; j<=11; j++) add += M[i][j];
  }

  if(O == 'S') cout<<fixed<<setprecision(1)<<add<<endl;
  else cout<<fixed<<setprecision(1)<<add/30.0<<endl;
  return 0;
}
