#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int array[10];cin>> array[0];
  for(int i=1; i<10;i++) array[i] = array[i-1]*2;
  for(int i=0; i<10;i++) cout <<"N["<<i<<"] = "<<array[i]<<endl;
  return 0;
}
