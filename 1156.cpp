#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double S=0.0;
  for(double i=1.0,j=1.0; i<=39.0; i+=2.0,j*=2.0) S += i/j;
  cout <<fixed<<setprecision(2)<<S<<endl;
  return 0;
}
