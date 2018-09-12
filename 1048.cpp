#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  double salary, salary_values[6] = {-1.00,400.00,800.00,1200.00,2000.00,5000000.00}, percentage[5] = {15,12,10,7,4};
  cin >> salary;
  for(int i=1; i<6; i++)
    if(salary > salary_values[i-1] && salary <= salary_values[i]){
      cout <<"Novo salario: "<<fixed<<setprecision(2)<<salary + salary*(percentage[i-1]/100)<<endl;
      cout <<"Reajuste ganho: "<<fixed<<setprecision(2)<<salary*(percentage[i-1]/100)<<endl;
      cout <<"Em percentual: "<<fixed<<setprecision(0)<<percentage[i-1]<<" %"<<endl;
      return 0;
    }
}
