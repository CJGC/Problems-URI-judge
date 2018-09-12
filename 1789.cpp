#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int groups,greater=0;
  while(cin>>groups){
    for(int i=0,speed; i<groups; i++){
      cin >> speed;
      if(speed > greater) greater = speed;
    }
    if(greater < 10) cout<<1<<endl;
    else if(greater < 20) cout<<2<<endl;
    else cout<<3<<endl;
    greater=0;
  }
  return 0;
}
