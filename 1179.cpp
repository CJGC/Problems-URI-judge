#include <bits/stdc++.h>
using namespace std;

void Print_array(int A[],int n,string name_vector){
  for(int i=0; i<n; i++) cout<<name_vector<<"["<<i<<"] = "<<A[i]<<endl;
}

int main(int argc, char const *argv[]) {
  int odd[5], even[5], number, i=0, j=0;
  for(int k=0; k<15; k++){
    cin >> number;
    if(number%2 == 0){even[i] = number; i++;}
    else{odd[j] = number; j++;}
    if(j == 5){Print_array(odd,j,"impar");j=0;}
    if(i == 5){Print_array(even,i,"par");i=0;}
  }
  if(j > 0) Print_array(odd,j,"impar");
  if(i > 0) Print_array(even,i,"par");
  return 0;
}
