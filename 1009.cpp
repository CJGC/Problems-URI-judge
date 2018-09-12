#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	string nameEmployee;
	double sellerSalary, totalValueSold;
	cin >> nameEmployee >> sellerSalary >> totalValueSold;
	cout << "TOTAL = R$ "<< fixed << setprecision(2) << sellerSalary+(totalValueSold*0.15) << endl;
	return 0;
}