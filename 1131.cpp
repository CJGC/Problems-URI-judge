#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int goals_int, goals_grem, inter_wins=0, grem_wins=0, grenais=0, draws=0, another_grenal;
  while(cin>>goals_int && cin>>goals_grem){
    grenais++;
    if(goals_int > goals_grem) inter_wins++;
    else if(goals_int == goals_grem) draws ++;
    else grem_wins++;
    cout <<"Novo grenal (1-sim 2-nao)"<<endl;
    cin >> another_grenal;
    if(another_grenal == 1) continue;
    break;
  }
  cout <<grenais<<" grenais"<<endl<<"Inter:"<<inter_wins<<endl<<"Gremio:"<<grem_wins<<endl<<"Empates:"<<draws<<endl;
  if(inter_wins > grem_wins) cout<<"Inter venceu mais"<<endl;
  else if(inter_wins == grem_wins) cout<<"Nao houve vencedor"<<endl;
  else cout<<"Gremio venceu mais"<<endl;
  return 0;
}
