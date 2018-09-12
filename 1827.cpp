#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(cin >> N){
    int M[N][N],op1=N-1,op2=N/3,op3=N-op2-1;
    for(int i=0; i<N; i++)
      for(int j=0; j<N; j++) M[i][j] = 0;
    for(int i=op1,j=0; i>=0; i--,j++) M[i][j] = 3;
    for(int i=op1,j=op1; i>=0; i--,j--) M[i][j] = 2;
    for(int i=op2; i<=op3; i++)
      for(int j=op2; j<=op3; j++) M[i][j] = 1;
    M[N/2][N/2] = 4;

    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++)
        cout<<M[i][j];
      cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}
