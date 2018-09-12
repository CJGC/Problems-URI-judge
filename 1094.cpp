#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double N, frogs=0, rats=0, rabbits=0, animal_amount; cin >> N; char type_animal;
  for(int i=0; i<N; i++){
    cin >> animal_amount >> type_animal;
    if(type_animal == 'C') rabbits += animal_amount;
    else if(type_animal == 'R') rats += animal_amount;
    else frogs += animal_amount;
  }
  animal_amount = rabbits+rats+frogs;
  double type_animals[3]={rabbits,rats,frogs}, percentage[3]={100*rabbits/animal_amount,100*rats/animal_amount,100*frogs/animal_amount};
  string messages[3] = {"coelhos: ","ratos: ","sapos: "};
  cout<<"Total: "<<animal_amount<<" cobaias"<<endl;
  for(int i=0; i<3; i++) cout <<"Total de "<<messages[i]<<type_animals[i]<<endl;
  for(int i=0; i<3; i++) cout<<"Percentual de "<<messages[i]<<fixed<<setprecision(2)<<percentage[i]<<" %"<<endl;
}
