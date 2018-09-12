#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  for(int i=1,j=7; i<10; i+=2,j=7)
    for(int k=0; k<3; k++,j--)
      cout <<"I="<<i<<" J="<<j<<endl;
  return 0;
}
