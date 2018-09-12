#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N, date_vector[3], days_vector[3] = {365,30,1};
  cin >> N;
  for (int i = 0; i < 3; i++) {
    date_vector[i] = N/days_vector[i];
    N -= date_vector[i]*days_vector[i];
  }
  cout << date_vector[0] << " ano(s)\n" << date_vector[1] << " mes(es)\n" << date_vector[2] << " dia(s)" <<endl;
  return 0;
}
