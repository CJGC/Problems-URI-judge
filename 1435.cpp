#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  while(cin>>N){
    if(N <= 0) break;
    int begin=0,end=N,i=0,j=0,number=1,M[N][N];
    while(begin < end){
      while(j < end){M[i][j] = number;j++;}j--;i++;
      while(i < end){M[i][j] = number;i++;}i--;j--;
      while(j >= begin){M[i][j] = number;j--;}j++;i--;
      while(i >= begin){M[i][j] = number;i--;}
      begin++; end--; number+=1; i=begin; j=begin;
    }
    for(int l=0; l<N; l++){
      for(int c=0; c<N; c++)
        if(c != 0 && M[l][c] <= 9) cout<<"   "<<M[l][c];
        else cout<<"  "<<M[l][c];
      cout<<endl;
    }cout<<endl;
  }
  return 0;
}
