#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int DDD, DDD_values[8] = {61,71,11,21,32,19,27,31};
  string destination[8] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
  cin >> DDD;
  for(int i=0; i<8; i++) if(DDD == DDD_values[i]){ cout <<destination[i]<<endl; return 0;}
  cout <<"DDD nao cadastrado"<< endl;
  return 0;
}
