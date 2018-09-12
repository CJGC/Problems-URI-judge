#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double S=0.0;
  for(double i=1.0; i<=100.0; i++) S += 1.0/i;
  cout <<fixed<<setprecision(2)<<S<<endl;
  return 0;
}
