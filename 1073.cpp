#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N; cin >> N;
  for(long int i=1; i<=N; i++) if(i % 2 == 0)cout<<i<<"^2"<<" = "<<i*i<<endl;
  return 0;
}
