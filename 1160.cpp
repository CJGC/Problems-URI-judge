#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int T,PA,PB; double G1,G2;
  cin >> T;
  for(int i=0,years=0; i<T; i++,years=0){
    cin >> PA >> PB >> G1 >> G2;
    G1 /= 100; G2 /= 100;
    while(true){
      PA += PA*G1;
      PB += PB*G2;
      years++;
      if(PA > PB || years > 100) break;
    }
    if(years > 100) cout <<"Mais de 1 seculo."<<endl;
    else cout<<years<<" anos."<<endl;
  }
  return 0;
}
