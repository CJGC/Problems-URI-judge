#include <bits/stdc++.h>

using namespace std;
 
int main(){
    double A,B;
    cin >>A >>B;
    A = (A*3.5+B*7.5)/((3.5+7.5));
    cout << "MEDIA = "<< fixed << setprecision(5) << A << endl;
    return 0;
}