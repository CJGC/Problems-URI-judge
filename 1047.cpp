#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int A,A_m,B,B_m, hours = 0, minutes = 0;
  cin >> A >> A_m >> B >> B_m;
  if(A > B && A_m < B_m){ hours = (24-A)+B; minutes = B_m - A_m;}
  else if(A == B && A_m < B_m) minutes = B_m - A_m;
  else if(A < B && A_m < B_m){ hours = B-A; minutes = B_m - A_m;}
  else if(A > B && A_m == B_m) hours = (24-A)+B;
  else if(A == B && A_m == B_m) hours = 24;
  else if(A < B && A_m == B_m) hours = B-A;
  else if(A < B && A_m > B_m){ hours = (B-A)-1; minutes = 60-(A_m - B_m);}
  else if((A > B || A == B) && A_m > B_m){ hours = ((24-A)+B)-1; minutes = 60-(A_m - B_m);}
  cout << "O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<< " MINUTO(S)"<< endl;
  return 0;
}
