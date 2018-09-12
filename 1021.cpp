#include <bits/stdc++.h>
using namespace std;

int main(){
  string messages[2] = {" nota(s) de R$ "," moeda(s) de R$ "};
  double values[12] = {100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01}, N;  cin >> N;
  cout << "NOTAS:" << endl;
  for(int i=0,j=0; i < 12; i++){
    if(i == 6){ j++; cout <<"MOEDAS:"<<endl;}
    cout <<N%values[i]<< messages[j] << fixed << setprecision(2) << values[i] <<endl; //poner en N/vales[i] int()
    N -= (int(N/values[i]))*values[i];
  }
  return 0;
}
