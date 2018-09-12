#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
  string crow_action; int screams=3,add=0,expt=2;
  while(getline(cin,crow_action)){
    if(crow_action == "caw caw"){cout<<add<<endl; screams--;add=0;}
    else for(string::size_type i=0;i<crow_action.size();++i,expt--)
            if(crow_action[i] == '*') add += pow(2,expt);
    if(screams == 0) break;
    expt=2;
  }
  return 0;
}
