#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  long long int N, number, on_interval = 0; cin >> N;
  for(int i=0; i<N; i++){
    cin >> number;
    if(number >= 10 && number <= 20) on_interval++;
  }
  cout<<on_interval<<" in"<<endl<<N-on_interval<<" out"<<endl;
  return 0;
}
