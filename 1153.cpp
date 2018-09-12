#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int N,fact=1; cin>>N;
  for(int i=1; i<=N; i++) fact*=i;
  cout << fact <<endl;
  return 0;
}
