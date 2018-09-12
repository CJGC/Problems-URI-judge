#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X,Z,add=0,i=0; cin>>X;
  while(cin >> Z) if(Z > X) break;
  while(true){
    add += X;
    X++; i++;
    if(add > Z) break;
  }
  cout <<i<<endl;
  return 0;
}
