#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int N, *primes; cin >> N;
  for(int i=0,X; i<N; i++){
    cin >> X;
    if(X%2==1 || X==2){
      primes = new int[X+1];
      primes[2] = 2;
      for(int i=3; i<=X; i+=2) primes[i] = i;
      for(int i=3; i*i<=X; i+=2)
        if(primes[i] != -1)
          for(int j=i; i*j<=X; j+=2) primes[i*j] = -1;
      for(int i=0; i<=X; i++) cout <<primes[i]<<" ";
      if(primes[X] == X) cout<<X<<" eh primo"<<endl;
      else cout<<X<<" nao eh primo"<<endl;
      delete[] primes;
      continue;
    }
    cout<<X<<" nao eh primo"<<endl;
  }
  return 0;
}
