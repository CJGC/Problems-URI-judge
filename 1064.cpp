#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double number, positive_numbers = 0, add = 0;
  for(int i=0; i<6; i++){
    cin >> number;
    if(number > 0){
      positive_numbers ++;
      add += number;
    }
  }
  cout <<positive_numbers<<" valores positivos"<<endl<<fixed<<setprecision(1)<<add/positive_numbers<< endl;
  return 0;
}
