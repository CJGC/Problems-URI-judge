#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N,X,Y,begin,end;
  cin >> N;  int add_odd[N];
  for(int i=0; i<N; i++){
    add_odd[i] = 0;
    cin >> X >> Y;
    if(X < Y){begin = X+1; end = Y;}
    else{begin = Y+1; end = X;}
    for(begin; begin<end; begin++) if(begin % 2 != 0) add_odd[i] += begin;
  }
  for(int i=0; i<N; i++) cout << add_odd[i] << endl;
  return 0;
}
