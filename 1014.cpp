#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	unsigned short int totalDistance;
	double spentFuel;
	cin >> totalDistance >> spentFuel;
	cout << fixed << setprecision(3) << (totalDistance/spentFuel) << " km/l"<<endl;
	return 0;
}