#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int i=0,k=0,j=0, previous_j = 0;
  string words[4] = {"key","","",""}, animals[15] = {".",".",".",".",".",".",".","aguia","pomba","homem","vaca","pulga","lagarta","sanguessuga","minhoca"};
  string levels[4][15] = {"key",".",".",".",".",".",".",".",".",".",".",".",".",".",".",
                          ".","vertebrado","invertebrado",".",".",".",".",".",".",".",".",".",".",".",".",
                          ".",".",".","ave","mamifero","inseto","anelideo",".",".",".",".",".",".",".",".",
                          ".",".",".",".",".",".",".","carnivoro","onivoro","onivoro","herbivoro","hematofago","herbivoro","hematofago","onivoro"};
  for(int value=1; value<4; value++) cin >> words[value];
  while(true){
    if(words[k] == levels[i][j]){ previous_j = j; j = j*2+1; i++; k++;}
    else j++;
    if(j >= 15) break;
  }
  cout <<animals[previous_j]<< endl;
}
