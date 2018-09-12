#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double A,B,C;
  cin >> A >> B >> C;
  double root = (B*B - 4*A*C), denominator = 2*A;
  if(root >= 0 && denominator != 0){
    cout << "R1 = " << fixed << setprecision(5) << (-B + sqrt(root))/denominator << endl;
    cout << "R2 = " << fixed << setprecision(5) << (-B - sqrt(root))/denominator << endl;
    return 0;
  }
  cout << "Impossivel calcular" << endl;
}
