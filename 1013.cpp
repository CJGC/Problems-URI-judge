#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
	short int a,b,s;
	cin >> a >> b >> s;
	cout << (a+b + (a*b*s)*(a-b))/2 << " eh o maior" <<endl;
	return 0;
}