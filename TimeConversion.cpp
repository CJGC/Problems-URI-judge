#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N, time_vector[3], seconds_vector[3] = {3600,60,1};
  cin >> N;
  for (int i = 0; i < 3; i++) {
    time_vector[i] = N/seconds_vector[i];
    N -= time_vector[i]*seconds_vector[i];
  }
  cout << time_vector[0] <<":"<< time_vector[1] <<":"<< time_vector[2] <<endl;
  return 0;
}
