#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	unsigned short int codeProduct1, codeProduct2, numberUnitsProduct1, numberUnitsProduct2;
	double priceUnitProduct1, priceUnitProduct2;
	cin >> codeProduct1 >> numberUnitsProduct1 >> priceUnitProduct1 >> codeProduct2 >> numberUnitsProduct2 >> priceUnitProduct2;
	cout << "VALOR A PAGAR: R$ "<< fixed << setprecision(2) << (numberUnitsProduct1*priceUnitProduct1 + numberUnitsProduct2*priceUnitProduct2) << endl;
	return 0;
}