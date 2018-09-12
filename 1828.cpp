#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string game_rules[10] = {"tesoura papel","papel pedra","pedra lagarto","lagarto Spock","Spock tesoura","tesoura lagarto","lagarto papel",
                          "papel Spock","Spock pedra","pedra tesoura"}, Sheldon, Raj;
  bool case_2=true;
  int T; cin>>T;
  for(int i=1; i<=T; i++,case_2=true){
    cin>>Sheldon>>Raj;
    if(Sheldon == Raj){cout<<"Caso #"<<i<<": "<<"De novo!"<<endl; continue;}
    for(int j=0; j<10; j++) if(game_rules[j] == Sheldon+" "+Raj){cout<<"Caso #"<<i<<": "<<"Bazinga!"<<endl;case_2=false;break;}
    if(case_2) cout<<"Caso #"<<i<<": "<<"Raj trapaceou!"<<endl;
  }
  return 0;
}
