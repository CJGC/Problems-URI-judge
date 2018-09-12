#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int A,N; cin>>A;
  while(cin>>N) if(N > 0) break;
  cout<<A*N + (N*(N-1))/2<<endl;
  return 0;
}
