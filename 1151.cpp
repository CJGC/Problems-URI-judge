#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int N; cin>>N; int fibo[N];
  if(N > 1) fibo[1] = 1;
  fibo[0]= 0;
  for(int i=2; i<N; i++) fibo[i] = fibo[i-1]+fibo[i-2];
  for(int i=0; i<N-1; i++) cout << fibo[i] <<" ";
  cout << fibo[N-1] <<endl;
  return 0;
}
