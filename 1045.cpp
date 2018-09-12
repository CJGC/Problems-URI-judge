#include <bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b){return ( *(double*)b - *(double*)a );}

int main(int argc, char const *argv[]) {
  double triangle_sides[3];
  for(int i=0; i<3; i++) cin >> triangle_sides[i];
  qsort(triangle_sides,3,sizeof(double),compare);
  if(triangle_sides[0] >= triangle_sides[1] + triangle_sides[2]){cout << "NAO FORMA TRIANGULO" << endl; return 0;}
  if(pow(triangle_sides[0],2) == pow(triangle_sides[1],2) + pow(triangle_sides[2],2)) cout << "TRIANGULO RETANGULO" << endl;
  if(pow(triangle_sides[0],2) > pow(triangle_sides[1],2) + pow(triangle_sides[2],2)) cout << "TRIANGULO OBTUSANGULO" << endl;
  if(pow(triangle_sides[0],2) < pow(triangle_sides[1],2) + pow(triangle_sides[2],2)) cout << "TRIANGULO ACUTANGULO" << endl;
  if(triangle_sides[0] == triangle_sides[1] && triangle_sides[0] == triangle_sides[2]) cout << "TRIANGULO EQUILATERO" << endl;
  else if(triangle_sides[0] == triangle_sides[1] || triangle_sides[0] == triangle_sides[2] || triangle_sides[1] == triangle_sides[2]) cout << "TRIANGULO ISOSCELES" << endl;
  return 0;
}
