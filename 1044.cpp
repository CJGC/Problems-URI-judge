#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int A,B, greater, lower;
  cin >> A >> B;
  if(A >= B){ greater = A; lower = B;}
  else{greater = B; lower = A;}
  if(greater % lower == 0){cout << "Sao Multiplos" << endl; return 0;} // or B == A*(B/A);
  cout << "Nao sao Multiplos" << endl; return 0;
}
