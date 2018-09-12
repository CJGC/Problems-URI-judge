#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X,Y;
  double prices[5] = {4.00,4.50,5.00,2.00,1.50};
  cin >> X >> Y;
  cout << "Total: R$ " << fixed << setprecision(2) << prices[X-1]*Y << endl;
  return 0;
}
