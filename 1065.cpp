#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int number, even_values = 0;
  for(int i=0; i<5; i++){
    cin >> number;
    if(number % 2 == 0) even_values ++;
  }
  cout <<even_values<<" valores pares"<<endl;
  return 0;
}
