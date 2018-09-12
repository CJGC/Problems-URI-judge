#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(cin >> N){
    int M[N][N], N_over_2=N/2, N_minus_1=N-1;
    for(int i=0; i<N; i++)
      for (int j=0; j<N; j++) M[i][j] = 0;
    for(int i=0,j=0; i<N; i++,j++) M[i][j] = 1;
    for(int i=0,j=N_minus_1;i<N; i++,j--) M[i][j] = 2;
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++)
        cout<<M[i][j];
      cout<<endl;
    }
  }
  return 0;
}
