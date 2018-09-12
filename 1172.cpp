#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int array[10];
  for(int i = 0; i<10; i++){
    cin>> array[i];
    if(array[i] <= 0) array[i] = 1;
    cout <<"X["<<i<<"] = "<<array[i]<<endl;
  }
  return 0;
}
