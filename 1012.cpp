#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	const double PI = 3.14159;
	double A,B,C;
	cin >> A >> B >> C;
	double areas[5] = {A*C/2.0,PI*pow(C,2),((A+B)*C)/2,pow(B,2),A*B};
	string figureNames[5] = {"TRIANGULO: ","CIRCULO: ","TRAPEZIO: ","QUADRADO: ","RETANGULO: "};
	for(int i=0; i<5; i++) cout << figureNames[i] << fixed << setprecision(3) << areas[i] << endl;
}