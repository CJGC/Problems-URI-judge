#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,add=0; cin >> N;
  for(int i=0,X; i<N; i++){
    cin >> X;
    for(int j=1; j<X; j++) if(X%j == 0) add += j;
    if(add == X)cout <<X<<" eh perfeito"<<endl;
    else cout <<X<<" nao eh perfeito"<<endl;
    add=0;
  }
  return 0;
}
