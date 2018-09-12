#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double array[100];
  for(int i=0; i<100;i++){
    cin>> array[i];
    if(array[i] <= 10) cout <<"A["<<i<<"] = "<<fixed<<setprecision(1)<<array[i]<<endl;
  }
  return 0;
}
