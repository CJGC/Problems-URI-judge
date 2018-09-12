#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	const double PI = 3.14159;
	double R;
	cin >> R;
	cout << "VOLUME = "<< fixed << setprecision(3) << (4.0/3.0*PI*pow(R,3)) << endl;
	return 0;
}