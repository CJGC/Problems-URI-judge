#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	unsigned short int number, amountPerHour;
	double workedHours;
	cin >> number >> amountPerHour >> workedHours;
	cout << "NUMBER = " << number << endl <<"SALARY = U$ " << fixed << setprecision(2) << (amountPerHour*workedHours) << endl;
	return 0;
}