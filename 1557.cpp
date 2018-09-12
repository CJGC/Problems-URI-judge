#include <bits/stdc++.h>
using namespace std;

int digits_number(int number){
  int digits[9] = {10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
  for(int i=0; i<9; i++) if(number < digits[i]) return i+1;
}

int main(int argc, char const *argv[]) {
  int N,T,digits_current_number;
  while(cin >> N && N != 0){
    int M[N][N];
    for(int i=0,number=1; i<N; i++,number*=2)
      for(int j=0,value=number; j<N; j++,value*=2)  M[i][j] = value;
    T = digits_number(M[N-1][N-1]);
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        digits_current_number = digits_number(M[i][j]);
        if(j == 0) digits_current_number++;
        for(int k=0; k<=T-digits_current_number; k++) cout <<" ";
        cout<<M[i][j];}
      cout<<endl;}
    cout<<endl;
  }
  return 0;
}
