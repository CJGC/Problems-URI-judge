#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int A,B;
  cin >> A >> B;
  if(A > B){ cout <<"O JOGO DUROU " << (24 - A) + B << " HORA(S)" << endl; return 0;}
  if(A == B){ cout << "O JOGO DUROU 24 HORA(S)" << endl; return 0;}
  cout << "O JOGO DUROU "<< B - A << " HORA(S)" << endl; return 0;
}
