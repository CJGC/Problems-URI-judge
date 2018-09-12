#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double N[100]; cin>>N[0];
  for(int i=1; i<100; i++){
    cout<<"N["<<i-1<<"] = "<<fixed<<setprecision(4)<<N[i-1]<<endl;
    N[i] = N[i-1]/2;
  }
  cout<<"N["<<99<<"] = "<<fixed<<setprecision(4)<<N[99]<<endl;
  return 0;
}
