#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N[1000], T; cin>>T;
  for(int i=0,j=0; i<1000; i++,j++){
    if(j == T) j=0;
    N[i] = j;
    cout<<"N["<<i<<"] = "<<N[i]<<endl;
  }
  return 0;
}
