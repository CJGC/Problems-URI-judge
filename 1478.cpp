#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(cin >> N){
    if(N <= 0) break;
    int k=N-1, number=N; double M[N][N];
    while(k >= 0){
      for(int i=k,j=0; i<=N-1;j++,i++) M[i][j] = number;
      if(k != 0) for(int c=k,f=0; c<=N-1; c++,f++) M[f][c] = number;
      k--;number--;
    }
    for(int l=0; l<N; l++){
      for(int c=0; c<N; c++)
        if(c != 0 && M[l][c] <= 9) cout<<"   "<<M[l][c];
        else if(c != 0 && M[l][c] >= 10 && M[l][c]<= 99) cout<<"  "<<M[l][c];
        else if((c == 0 && M[l][c] >= 10 && M[l][c]<= 99) || (c==N-1 && M[l][c] >= 100)) cout<<" "<<M[l][c];
        else if(c == 0 && M[l][c] >=100) cout<<M[l][c];
        else cout<<"  "<<M[l][c];
      cout<<endl;
    }cout<<endl;
  }
  return 0;
}
