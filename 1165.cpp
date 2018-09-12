#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int N,max_number=10000000,*primes = new int[max_number]; primes[2] = 2;
  for(int i=3; i<max_number; i+=2) primes[i] = i;
  for(int i=3; i*i<=max_number; i+=2)
    if(primes[i] != -1)
      for(int j=3; i*j<max_number; j++) primes[i*j] = -1;
  cin >> N;
  for(int i=0,X; i<N; i++){
    cin >> X;
    if(X%2 == 1 || X==2)
      if(primes[X] == X){cout<<X<<" eh primo"<<endl;continue;}
    cout<<X<<" nao eh primo"<<endl;
  }
  delete[] primes;
  return 0;
}
