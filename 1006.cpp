#include <bits/stdc++.h>

using namespace std;

int main(){
	double A,B,C;
	cin >> A >> B >> C;
	A = (A*2+B*3+C*5)/(2+3+5);
	cout << "MEDIA = "<< fixed << setprecision(1) << A << endl;
	return 0;
}