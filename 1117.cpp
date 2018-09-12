#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double score[2];int i=0;
  while(cin >> score[i]) {
    if(score[i] < 0 || score[i] > 10){cout<<"nota invalida"<<endl; continue;}
    i++;
    if(i == 2) break;
  }
  cout<<"media = "<<fixed<<setprecision(2)<<(score[0]+score[1])/2<<endl;
  return 0;
}
