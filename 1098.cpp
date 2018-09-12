#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  for(double i=0,j=1; i<=2; i+=0.2,j=1)
    for(int k=0; k<3; k++, j++)
      cout <<"I="<<i<<" J="<<j+i<<endl;
  return 0;
}
