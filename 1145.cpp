#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X,Y; cin>> X>>Y;
  for(int i=1; i<=Y; i++){
    if(i%X != 0) cout<<i<<" ";
    else cout<<i<<endl;
  }
  return 0;
}
