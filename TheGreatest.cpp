#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int x,y,z;
  cin >> x >> y >> z;
  x = (x+y+abs(x-y))/2;
  z = (x+z+abs(x-z))/2;
  cout << z << " eh o maior" << endl;
  return 0;
}
