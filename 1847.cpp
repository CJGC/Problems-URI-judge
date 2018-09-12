#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  int A,B,C; bool happy = false;
  cin >> A >> B >> C;
  if(A>B&&C>=B) happy = true;
  else if(A<B&&B<C&&(C-B)>=(B-A)) happy = true;
  else if(A>B&&B>C&&(B-C)<(A-B)) happy = true;
  else if(A==B&&C>B) happy = true;
  if(happy) cout<<":)"<<endl;
  else cout<<":("<<endl;
  return 0;
}
