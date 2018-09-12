#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double A,B,C;
  cin >> A >> B >> C;
  if(A+B > C && A+C > B && B+C > A){
    cout << "Perimetro = " << fixed << setprecision(1) <<A+B+C << endl;
    return 0;
  }
  cout << "Area = "<< fixed << setprecision(1) << ((A+B)*C)/2 << endl;
  return 0;
}
