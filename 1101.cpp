#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int begin,end,N,M;
  while(cin >> N && cin >> M){
    if(N <= 0 || M <= 0) break;
    if(N < M){begin = N; end = M;}
    else{begin = M; end = N;}
    for(int i=begin; i<=end; i++) cout<<i<<" ";
    if((end-begin) % 2 == 0) cout<<"Sum="<<(pow(end,2)+end-pow(begin,2)-begin)/2 + begin<<endl;
    else cout<<"Sum="<<(end+begin)*((end-begin+1)/2)<<endl;
  }
  return 0;
}
