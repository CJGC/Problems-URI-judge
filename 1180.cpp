#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N; cin>>N; int X[N], lowest=0;
  for(int i=0; i<N; i++){
    cin>>X[i];
    if(X[i] < X[lowest]) lowest = i;
  }
  cout <<"Menor valor: "<<X[lowest]<<endl<<"Posicao: "<<lowest<<endl;
  return 0;
}
