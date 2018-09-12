#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int spent_time, average_speed;
  cin >> spent_time >> average_speed;
  cout << fixed << setprecision(3) << (double(spent_time)*double(average_speed))/12 << endl;
  return 0;
}
