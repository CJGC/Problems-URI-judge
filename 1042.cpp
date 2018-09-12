#include <bits/stdc++.h>
using namespace std;
int compare (const void * a, const void * b){return ( *(int*)a - *(int*)b );}

int main(int argc, char const *argv[]) {
  int unsorted_array[3], sorted_array[3];
  for(int i=0; i<3; i++){cin >> unsorted_array[i]; sorted_array[i] = unsorted_array[i];}
  qsort(sorted_array,3,sizeof(int),compare);
  for(int i=0; i<3; i++) cout << sorted_array[i] << endl;
  cout << endl;
  for(int i=0; i<3; i++) cout << unsorted_array[i] << endl;
  return 0;
}
