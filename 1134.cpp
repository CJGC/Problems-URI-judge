#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int code, gasoline=0,diesel=0,alcohol=0;
  while (cin >> code) {
    if(code == 1) alcohol++;
    else if(code == 2) gasoline++;
    else if(code == 3) diesel++;
    else if(code == 4) break;
  }
  cout <<"MUITO OBRIGADO"<<endl<<"Alcool: "<<alcohol<<endl<<"Gasolina: "<<gasoline<<endl<<"Diesel: "<<diesel<<endl;
  return 0;
}
