#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int number, position, greater=-500000;
  for(int i=1; i<=100; i++){
    cin >> number;
    if(number > greater){greater = number; position = i;}
  }
  cout <<greater<<endl<<position<<endl;
  return 0;
}
