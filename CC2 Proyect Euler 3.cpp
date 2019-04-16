#include<iostream>
using namespace std;

bool primo(int n) {
	int cont = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0)
			cont++;
	}
	if (cont == 2)	return true;
	else return false;
}

int main() {
	long long int n = 600851475143, m;
	for (long long int i = 1; i < n; i++) {
		if (n%i == 0 && primo(i) == true) {
			m = i;
		}
	}
	cout << m;
	return 0;
}
