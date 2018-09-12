#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N, bills[7] = {100,50,20,10,5,2,1}, bills_amount = 0;
  cin >> N;
  cout << N << endl;
  for(int i = 0; i < 7; i++){
    bills_amount = N/bills[i];
    N -= bills_amount*bills[i];
    cout << bills_amount << " nota(s) de R$ " << bills[i] << ",00" <<endl;
  }
  return 0;
}
