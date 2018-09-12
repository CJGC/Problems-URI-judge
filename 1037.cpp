#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double number, numbers[5] = {0.00,25.00,50.00,75.00,100.00};
  char symbols[3] = {'[','(',']'};
  cin >> number;
  if(number >= 0 && number <= 100)
    for(int i=1, symbol_index = 0; i<5; i++){
      if(number <= numbers[i]){
        cout << "Intervalo "<< symbols[symbol_index] << numbers[i-1] <<","<< numbers[i] << symbols[2] << endl;
        return 0;
      } if(symbol_index == 0)symbol_index ++;
    }
  cout << "Fora de intervalo" << endl;
}
