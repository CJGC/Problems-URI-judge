#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int N; cin>> N;
  double values[2][N];
  for(int i=0; i<N; i++) cin >> values[0][i] >> values[1][i];
  for(int i=0; i<N; i++){
    if(values[1][i] == 0){ cout<<"divisao impossivel"<<endl; continue;}
    cout<<fixed<<setprecision(1)<<values[0][i]/values[1][i]<<endl;
  }
  return 0;
}
