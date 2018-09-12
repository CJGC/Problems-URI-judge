#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int age; double average=0.0,i=0.0;
  while(cin >> age){
    if(age < 0) break;
    if(age != 0){ average += age; i++;}
  }
  cout<<fixed<<setprecision(2)<<average/i<<endl;
  return 0;
}
