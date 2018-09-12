#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;cin >> N;int cycles=N*4;
  for(int i=1; i<=cycles; i++){
    if(i%4==0) cout<<"PUM"<<endl;
    else cout<<i<<" ";
  }
  return 0;
}
