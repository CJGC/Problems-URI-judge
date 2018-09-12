#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  unsigned long long int fibo[61],T; fibo[0] = 0; fibo[1] = 1;
  for(int i=2; i<=60;i++) fibo[i] = fibo[i-1] + fibo[i-2];
  cin>>T;
  for(int i=1,N; i<=T; i++){
    cin>>N;
    cout<<"Fib("<<N<<") = "<<fibo[N]<<endl;
  }
  return 0;
}
