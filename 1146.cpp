#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X;
  while(cin>>X){
    if(X == 0) break;
    for(int i=1; i<X;i++) cout<<i<<" ";
    cout<<X<<endl;
  }
  return 0;
}
