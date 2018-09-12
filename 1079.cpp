#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int N; cin >> N;
  double add=0, number, weight[3] = {2,3,5}, answer[N];
  for(int i=0,k=0; i<N; i++,k++){
    for(int j=0; j<3;j++){
      cin >> number;
      add += number*weight[j];
    }
    answer[k] = add/10;
    add=0;
  }
  for(int i=0; i<N; i++) cout <<fixed<< setprecision(1)<<answer[i]<<endl;
  return 0;
}
