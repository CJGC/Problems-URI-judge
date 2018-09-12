#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(cin >> N){
    int M[N][N], N_over_2=N/2, N_minus_1=N-1;
    for(int i=0,j=0; i<N; i++,j++) M[i][j] = 1;
    for(int i=0,j=N_minus_1;i<N; i++,j--) M[i][j] = 2;
    for(int i=0; i<N_over_2; i++)
      for(int j=i+1; j<N_minus_1-i; j++) M[i][j] = 3;
    for(int i=N_minus_1,even=N_minus_1; i>N_over_2; i--,even-=2)
      for(int j=i-even+1; j<=i-1; j++) M[i][j] = 3;
    for(int i=1,even=4,odd=1,end; i<N_minus_1; i++){
      if(i < N_over_2) end = i-1;
      else if(N%2 != 0){end = i-odd; odd+=2;}
      else if(i > N_over_2){end = i-even; even+=2;}
      for(int j=end; j >= 0;j--) M[i][j] = 3;}
    for(int i=1, begin; i<N_minus_1; i++){
      if(i < N_over_2) begin = N-i;
      else if(N%2 != 0) begin = i+1;
      else if(i > N_over_2){begin = i+1;}
      for(int j=begin; j<N; j++) M[i][j] = 3;}

    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++)
        cout<<M[i][j];
      cout<<endl;
    }
  }
  return 0;
}
