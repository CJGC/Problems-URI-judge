#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  long long int N, X; cin >> N;
  string messages[N];
  for(int i=0; i<N; i++){
    cin >> X;
    if(X == 0) messages[i] = "NULL";
    else if(X % 2 == 0 && X < 0) messages[i] = "EVEN NEGATIVE";
    else if(X % 2 == 0 && X > 0) messages[i] = "EVEN POSITIVE";
    else if(X % 2 != 0 && X < 0) messages[i] = "ODD NEGATIVE";
    else messages[i] = "ODD POSITIVE";
  }
  for(int i=0; i<N; i++) cout << messages[i] <<endl;
  return 0;
}
