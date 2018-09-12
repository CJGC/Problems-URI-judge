#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,M;
  while(cin>>N && cin>>M){
    if(N == M) break;
    else if(N > M) cout <<"Decrescente"<<endl;
    else cout <<"Crescente"<<endl;
  }
  return 0;
}
