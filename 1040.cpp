#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double N1,N2,N3,N4, average;
  cin >> N1 >> N2 >> N3 >> N4;
  average = (N1*2+N2*3+N3*4+N4*1)/(10);
  cout << "Media: " << fixed << setprecision(1) << average << endl;
  if(average >= 7.0){cout << "Aluno aprovado." << endl; return 0;}
  if(average >= 5.0 && average < 7.0){
    cout << "Aluno em exame." << endl;
    cin >> N1;
    cout << "Nota do exame: " << fixed << setprecision(1) << N1 << endl;
    average = (N1+average)/2;
    if(average >= 5.0) cout << "Aluno aprovado." << endl;
    else cout << "Aluno reprovado." << endl;
    cout << "Media final: " << fixed << setprecision(1) << average << endl;
    return 0;
  }
  cout << "Aluno reprovado." << endl;
  return 0;
}
