#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double score[4]; int i=0;
  while(cin>> score[i]){
    if((score[i] < 0 || score[i] > 10) && i < 2){ cout<<"nota invalida"<<endl; continue;}
    else if(i < 2) i++;
    if(i == 2){cout<<"media = "<<fixed<<setprecision(2)<<(score[0]+score[1])/2<<endl; i++;continue;}
    else if(i < 2) continue;
    if(i > 2 && score[i] == 1){i=0; cout<<"novo calculo (1-sim 2-nao)"<<endl;}
    else if(i > 2 && score[i] == 2){cout<<"novo calculo (1-sim 2-nao)"<<endl; break;}
    else if(i > 2) cout <<"novo calculo (1-sim 2-nao)"<<endl;
  }
  return 0;
}
