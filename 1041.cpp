#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double X,Y;
  cin >> X >> Y;
  if(X == 0.0 && Y == 0.0){cout << "Origem" << endl; return 0;}
  if(X == 0.0){cout << "Eixo Y" << endl; return 0;}
  if(Y == 0.0){cout << "Eixo X" << endl; return 0;}
  if(X > 0.0 && Y > 0.0){cout << "Q1" << endl; return 0;}
  if(X < 0.0 && Y < 0.0){cout << "Q3" << endl; return 0;}
  if(X > 0.0 && Y < 0.0){cout << "Q4" << endl; return 0;}
  if(X < 0.0 && Y > 0.0){cout << "Q2" << endl; return 0;}
}
