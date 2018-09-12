#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int array[20];
  for(int i=19; i>=0;i--) cin>> array[i];
  for(int j=0; j<19; j++)cout <<"A["<<j<<"] = "<<array[j]<<endl;
  return 0;
}
