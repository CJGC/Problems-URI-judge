#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int number, even_values = 0, positive_numbers = 0, negative_numbers = 0;
  for(int i=0; i<5; i++){
    cin >> number;
    if(number % 2 == 0) even_values ++;
    if(number > 0) positive_numbers ++;
    else if(number < 0) negative_numbers ++;
  }
  cout <<even_values<<" valor(es) par(es)"<<endl<<5-even_values<<" valor(es) impar(es)"<<endl<<positive_numbers<<" valor(es) positivo(s)"<<endl<<negative_numbers<<" valor(es) negativo(s)"<<endl;
  return 0;
}
