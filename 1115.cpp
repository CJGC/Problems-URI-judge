#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int X,Y;
  while(cin>>X && cin>>Y){
    if(X == 0 || Y == 0) break;
    else if(X > 0 && Y > 0) cout <<"primeiro"<<endl;
    else if(X < 0 && Y > 0) cout <<"segundo"<<endl;
    else if(X < 0 && Y < 0) cout <<"terceiro"<<endl;
    else cout <<"quarto"<<endl;
  }
  return 0;
}
